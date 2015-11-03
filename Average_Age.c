#include <stdio.h>
#include <stdlib.h>

int main()

{

	float age1, age2, age3, average;
	age1 = age2 = 34.0;
	
	printf("Enter your age for average\n");
	scanf("%f", &age3);

	average = (age1 + age2 + age3) / 3;
	printf("The average age of the group is %f\n", average);

	return 0;
}
