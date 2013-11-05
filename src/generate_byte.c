#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char byte(unsigned char inf, unsigned char max)
{
	char result;
	while(result < inf || result > max)
	{
		srand(time(NULL));
		result = rand();
		printf("%c", result);
	}
	puts("");
	return result;
}
