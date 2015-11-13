#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main () {

	int x, temp, change;
	int howMany = 5;
	int goals[howMany];

	for(x=0; x<howMany; x++){
		goals[x] = (rand()%25)+1;
	}

	printf("First List\n");
	for(x=0; x<howMany; x++){
		printf("%d \n", goals[x]); 
	}

	while(1){

		change = 0;

		for(x=0; x<howMany-1; x++){
	
			if(goals[x]>goals[x+1]){
				int temp = goals[x];
				goals[x] = goals[x+1];
				goals[x+1] = temp;
				change = 1;
			}
		}

		if(change==0){
			break;
		}
	}

	printf("\nSorted List\n");
	for(x=0; x<howMany; x++){
		printf("%d \n", goals[x]);
	}

	return 0;

}
