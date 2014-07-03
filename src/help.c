#include <stdio.h>

char help(char * exe)
{
	return printf("brb-universe\nCopyright 2014 grepwood, licensed under GPL v3\n\nUsage: %s\t[help || sec len]\n\t-h, --help\tprint this message\n\tsec\t\tsecurity for which to generate\n\tlen\t\tlength of generated password\n", exe);
}
