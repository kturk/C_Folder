#include <stdio.h>
#include <stdlib.h>

int main()
{
	char answer;

	printf("Do you like bagels? (y/n)\n");
	scanf(" %c", &answer);

	if( (answer=='y') || (answer=='n') ){
		printf("Good job, you didn't mess anything up\n");
	}else{
		printf("Keybord much?\n");
	}

	return 0;
}
