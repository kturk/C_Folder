#include <stdio.h>
#include <stdlib.h>

int main()
{

	int age;
	char gender;
	
	printf("How old are you?\n");
	scanf(" %d", &age);

	printf("What is your gender? (m/f)\n");
	scanf(" %c", &gender);

	if(age >= 18){
		printf("You may enter this website\n ");
	
		if(gender == 'm'){
			printf("dude\n");

		}
		if(gender == 'f'){
			printf("m'lady\n");
		}
	}

	if(age < 18){
		printf("Nothing to see here!\n");
	}

	return 0;
}


