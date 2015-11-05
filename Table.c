#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main()
{

	int columns;
	int rows;
	
	for(rows=1; rows<=5; rows++){

		for(columns=1; columns<=8; columns++){
			printf("%d ", columns);
		}

		printf("\n");

	}

	return 0;
}
	
	
