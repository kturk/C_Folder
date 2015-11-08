#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main()
{

	int i;
	int meatBalls[5];
	int totalBalls = 0;

	for(i=0; i<5; i++){
		printf("How many meatballs did you eat on day %d \n", i+1);
		scanf(" %d", &meatBalls[1]);
	}

	for(i=0; i<5; i++){

		totalBalls += meatBalls[i];
	}

	int avg = totalBalls / 5;
	printf("\nYou ate %d meatballs total, thats an aveerage of %d per day! \n", totalBalls, avg);

	return 0;
}

