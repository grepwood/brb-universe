#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <time.h>
#include <openssl/rand.h>

#include "help.h"
#include "idiotcheck.h"
#include "wpa.h"

char printable(unsigned char password_byte)
{
	char check = 1;
	if(password_byte < 0x20 || password_byte > 0x7E) {
		check = 0;
	}
	return check;
}

int main(int argc, char * argv[])
{
	unsigned long int len;
	unsigned long int count;
	char success1 = 0;
	char success2 = 0;
	unsigned char * password;
	srand(time(NULL));
	if(argc == 1)
	{
		exit(help(argv[0]));
	}
	detect_idiots(argv[2]);
	len = strtoul(argv[2],NULL,10);
	password = (unsigned char*)malloc(len+1);
	password[len] = 0;
	if(!strcmp(argv[1],"wpa"))
	{
		if(len < WPA_LMIN || len > WPA_LMAX)
		{
			printf("ERROR: password length (%li) outside of useful range: [%i,%i]\n", len, WPA_LMIN, WPA_LMAX);
			exit(1);
		}
		for(count = 0; count < len; ++count, success2 = 0)
		{
			while(!success2)
			{
				success1 = RAND_bytes(password+count,1);
				success2 = printable(password[count]);
			}
		}
	}
	if(success1)
	{
		printf("Your password is:\n%s\n",password);
	}
	free(password);
	return 0;
}
