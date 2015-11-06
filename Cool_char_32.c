#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int tuna = '$';

	if( isalpha(tuna) ){
		printf("%c is a letter\n", tuna);
	}else{

		if( isdigit(tuna) ){
			printf("%c is a number\n");
		}else{
			printf("%c is a... I don't what's that!?\n", tuna);
		}

	}

	return 0;
}
