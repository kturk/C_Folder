#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	char grade = 'B';

	switch(grade){
		case 'A' : printf("Sweat!\n");
			   break;
		case 'B' : printf("Could have tried harder\n");
			   break;
		case 'C' : printf("I C you didn't study\n");
			   break;
		case 'D' : printf("You love the D\n");
			   break;
		case 'F' : printf("Thats embarrasing\n");
			   break;
		default  : printf("That doesn't even make sense!\n");
	}

	return 0;
}
