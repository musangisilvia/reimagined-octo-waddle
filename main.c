#include "holberton.h"
#include <stdio.h>

int main(void)
{
	char *name = "Musangi";
	char *sec = "Silvia";
	char let = 's';
	int n = -5780040, len = 0;

	len = _printf("My name i%c Alfred\n", let);
	_printf("Length is %d\n", len);
	len = _printf("Her name is %s, second is %s\n", name, sec);
	_printf("Length is %d\n", len);
	len = _printf("My na%%me is%a Alfred\n");
	_printf("Length is %d\n", len);
	len = _printf("My na%%me is 789304u  Alfred\n");
	_printf("Length is %d\n", len);
	len = _printf("My number  is %d\n", n);
	_printf("Length is %d\n", len);
	len = _printf("My number\n");
	_printf("Length is %d\n", len);

	_printf(NULL);
	return (0);
}

