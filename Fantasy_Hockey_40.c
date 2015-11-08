#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	int i;
	int player[5] = {41, 34, 54, 65, 13};
	int goals[5] = {24, 12, 52, 12, 56};
	int gamesPlayed[5] = {30, 30, 27, 24, 20};
	float ppg[5];
	float bestPPG = 0.0;
	int bestPlayer;

	for(i=0; i<5; i++){
		ppg[i] = (float)goals[i] / (float)gamesPlayed[i];
		printf("%d \t %d \t %d \t %.2f \n", player[i], goals[i], gamesPlayed[i], ppg[i]);

		if(ppg[i] > bestPPG){
			bestPPG = ppg[i];
			bestPlayer = player[i];
		}
	}

	printf("\n The best player is %d \n", bestPlayer);

	return 0;
}
