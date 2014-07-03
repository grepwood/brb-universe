#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ascii.h"
#include "generate_byte.h"

void wpa(size_t len, char ** password)
{
	size_t pos;
	char * buf = NULL;
	buf = (char*)malloc(len);
	for(pos = 0; pos < len; ++pos)
	{
		buf[pos] = gen_byte(ASCII_MIN,ASCII_MAX);
	}
	memcpy(*password,buf,len);
	free(buf);
}
