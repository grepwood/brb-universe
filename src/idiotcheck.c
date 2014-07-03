#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void detect_idiots(char * alen)
{
	double nlen = strtod(alen,NULL);
	if(nlen < 0
	|| fmod(nlen,1))
	{
		puts("ERROR: non-negative integers and quotients cannot be a password length!");
		exit(1);
	}
}
