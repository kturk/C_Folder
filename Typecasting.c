#include <stdio.h>
#include <stdlib.h>

int main()
{

	float avgProfit;
	int priceOfApple = 4;
	int sales = 90;
	int daysWorked = 7;


	avgProfit = ( (float)priceOfApple * (float)sales / (float)daysWorked);
	printf("Average daily profit: $%.2f\n", avgProfit);

	return 0;
}
