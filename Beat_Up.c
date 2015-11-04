#include <stdio.h>
#include <stdlib.h>

int main()
{
	int hoursStudied = 80;  // 10 or more
	int kidsBeatUp = 3;  // 0 kids 

	if( (hoursStudied>=10) && (kidsBeatUp==0) ){
		printf("You are a good student\n");

	}else{
		printf("You are a bad student\n");
	}

	return 0;
}
