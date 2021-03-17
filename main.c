#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int len, len1;

	len1 = _printf("Hello World!\n");
	_printf("%d\n", len1);
	len = _printf("This is %c\n", 'A');
	_printf("%i\n", len);
	len1 = _printf("%s\n", "Hello");
	_printf("%d\n", len1);
	len = _printf("My name is %s.\n", "Musangi");
	_printf("%i\n", len);
	len1 = _printf("%\n");
	_printf("%d\n", len1);
	return (0);
}

