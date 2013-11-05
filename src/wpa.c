#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "ascii.h"
#include "generate_byte.h"

void wpa(const size_t len, char ** password)
{
	size_t pos;
	char * buf = NULL;
	buf = malloc(len);
	for(pos = 0; pos < len; ++pos)
	{
//		buf[pos] = byte(ASCII_MIN,ASCII_MAX);
		buf[pos] = 'D';
	}
	for(pos = 0; pos < len; ++pos)
	{
		printf("%c", buf[pos]);
	}
	puts("");
	memcpy(*password,buf,len);
	free(buf);
}
