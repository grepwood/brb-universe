#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char gen_byte(char inf, char max)
{
	char result;
	srand(time(0));
	while(result < inf || result > max)
	{
		result = rand();
	}
	return result;
}
