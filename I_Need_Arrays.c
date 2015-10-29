#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[] = "Kemal Turk";
	printf("My name is %s\n", name);

	name[0] = 'C';
	printf("My name is %s\n", name);

	char food[] = "Adana";
	printf("Best food is %s\n", food);
	
	strcpy(food, "Pizza");
	printf("Best food is %s\n", food);

	
	return 0;
}



