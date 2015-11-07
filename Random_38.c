#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int i;
	int diceRoll;

	for(i=0; i<20; i++){
		diceRoll =rand()%6; ) +1;
		printf("%dn", diceRoll);
	}
	
	return 0;
}
