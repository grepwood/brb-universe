#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ascii.h"
#include "generate_byte.h"

void wpa(long int len, char ** password)
{
	long int pos;
	srand(time(NULL));
	for(pos = 0; pos < len; ++pos)
	{
		*password[pos] = byte(ASCII_MIN,ASCII_MAX);
	}
}
