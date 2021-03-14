#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char *name = "Musangi";
	char *sec = "Silvia";
	char let = 's';

	_printf("My name i%c Alfred\n", let);
	_printf("Her name is %s, second is %s\n", name, sec);
	_printf("My na%%me is%a Alfred\n");
	_printf("My na%%me is Alfred\n");
	_printf(NULL);
	return (0);
}

