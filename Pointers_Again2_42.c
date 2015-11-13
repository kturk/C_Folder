#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{

	int tuna = 30;
	
	printf("Address \t Name \t Value \n");

	printf("%p \t %s \t %d \n", &tuna, "tuna", tuna);

	int * pTuna = &tuna;
	
	printf("%p \t %s \t %d \n", pTuna, "pTuna", *pTuna );

	return 0;
}

	
