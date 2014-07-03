#include <stdio.h>
#include <stdlib.h>
#include <openssl/rand.h>

char gen_byte(char inf, char max)
{
	unsigned char result;
	int bleh;
	while((	result < inf
	||	result > max)
	&&	!bleh)
	{
		bleh = RAND_bytes(&result,1);
	}
	return result;
}
