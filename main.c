#include "holberton.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int n = -5780040, len = 0;
	char *name = "Musangi";
	char *second = "Silvia";
	char let = 's';

	len = _printf("My name i%c Alfred\n", let);
	_printf("Length is %d\n", len);
	len = _printf("Her name is %s, second is %s\n", name, second);
	_printf("Length is %d\n", len);
	len = _printf("My na%%me is%a Alfred\n");
	_printf("Length is %d\n", len);
	len = _printf("My na%%me is 789304u  Alfred\n");
	_printf("Length is %d\n", len);
	len = _printf("My number  is %i\n", n);
	_printf("Length is %d\n", len);
	len = _printf("My number\n");
	_printf("Length is %d\n", len);
	len = _printf("Binary of 10 is %b\n", -98);
	_printf("Length is %d\n", len);

	_printf(NULL);
	return (0);
}

