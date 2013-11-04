#include <stdio.h>
#include <stdlib.h>

char byte(char inf, char max)
{
	char result;
	while(result < inf || result > max)
	{
		result = rand()%0xFF;
	}
	return result;
}
