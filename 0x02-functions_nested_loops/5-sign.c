#include <stdio.h>
#include "main.h"

int print_sign(int n)
{
	if(n>0){
		printf("+");
		return (1);
	}if(n==0){
		printf("0");
		return(0);
	}if(n<0){
		printf("-");
		return(-1);
	}

}
