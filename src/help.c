#include <stdio.h>

void help(char * exe)
{
	printf("brb-universe\nCopyright 2013 grepwood, licensed under GPL v3\n\nUsage: %s\t[help || sec length]\n\t-h, --help\tprint this message\n\tsec\t\tsecurity for which to generate\n\tlen\t\tlength of generated password\n", exe);
}
