#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void detect_idiots(char * lena)
{
	double lenm = strtod(lena,NULL);
	if(lenm < 0
	|| fmod(lenm,1) != 0)
	{
		puts("ERROR: non-negative integers and quotients cannot be a password length!");
		exit(1);
	}
}
