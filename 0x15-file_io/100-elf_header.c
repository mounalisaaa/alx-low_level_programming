#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char **argv) {
    // check number of arguments
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    // open the file
    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        fprintf(stderr, "Error: unable to open file %s\n", argv[1]);
        exit(98);
    }

    // read in the ELF header
    Elf64_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header)) {
        fprintf(stderr, "Error: unable to read ELF header of %s\n", argv[1]);
        close(fd);
        exit(98);
    }

    // verify header magic number to ensure file is an ELF file
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
        close(fd);
        exit(98);
    }

    // print out each field of the ELF header
    printf("%-35s%s\n", "Magic:", "ELF"); // Magic
    printf("%-35s%s\n", "Class:", (header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64"); // Class
    printf("%-35s%s\n", "Data:", (header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian"); // Data
    printf("%-35s%d (current)\n", "Version:", header.e_ident[EI_VERSION]); // Version
    printf("%-35s%s\n", "OS/ABI:", "UNIX - System V"); // OS/ABI
    printf("%-35s%d\n", "ABI Version:", header.e_ident[EI_ABIVERSION]); // ABI Version
    printf("%-35s", "Type:"); // Type
    switch (header.e_type) {
        case ET_NONE:
            printf("NONE (No file type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown>\n");
    }
    printf("%-35s0x%lx\n", "Entry point address:", header.e_entry); // Entry point address

    close(fd);
    return 0;
}
