#include <stdio.h>
#include <stdlib.h>

int main()
{

	int friends = 6;

	printf("I have %d friend%s\n", friends, (friends!=1) ? "s" : "" );

	return 0;
}
