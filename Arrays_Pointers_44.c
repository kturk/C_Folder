#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{
	int i;
	int meatBalls[5] = {4,43,5,62,8};

	printf("Element \t Address \t Value \n");

	for(i=0; i<5; i++){
		printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
	}

	//array names are just pointers to the first element
	printf("\nmeatBalls \t\t %p \n", meatBalls);

	//dereference it
	printf("\n*meatBalls \t\t %d \n", *meatBalls);
	printf("\n*(meatBalls+2) \t\t %d \n", *(meatBalls+2));

	return 0;
}
