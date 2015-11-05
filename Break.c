#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
	int a;
	int howMany;
	int maxAmount = 15;

	printf("How many times do you want this loop tp loop? (up tp 10) ");
	scanf(" %d", &howMany);

	for(a=1; a<=maxAmount; a++){

		printf("%d\n", a);

		if(a==howMany){
			break;
		}
	
	}

	return 0;
}
