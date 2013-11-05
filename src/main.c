#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

#include "help.h"
#include "idiotcheck.h"
#include "wpa.h"

int main(int argc, char * argv[])
{
	if(argc == 1)
	{
		exit(1);
	}
	else
	{
		int argb;
		for(argb = 1; argb < argc; ++argb)
		{
			if(!strcmp(argv[argb],"-h")
			|| !strcmp(argv[argb],"--help"))
			{
				help(argv[0]);
				exit(1);
			}
		}
	}
	detect_idiots(argv[2]);
	size_t len = strtoul(argv[2],NULL,10);
	bool success = 0;
	char * password = NULL;
	password = malloc(len);

	if(!strcmp(argv[1],"wpa"))
	{
		if(len < WPA_LMIN || len > WPA_LMAX)
		{
			printf("ERROR: password length (%li) outside of useful range: [%i,%i]\n", len, WPA_LMIN, WPA_LMAX);
			exit(1);
		}
		wpa(len,&password);	//space = wpa(len,&password);
//		variety = WPA_LMAX - WPA_LMIN;
		success = 1;
	}

//	long int tolerance = ponder(len,variety);

	if(success)
	{
		printf("Your password is:\n%s\n",password);
	}
	free(password);
	return 0;
}
