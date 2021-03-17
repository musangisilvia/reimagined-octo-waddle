#include "holberton.h"
#include <stdio.h>
#include <limits.h>

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
	len1 = _printf("hex: %x\n", 10);
	_printf("%d\n", len1);
	len1 = _printf("heX: %X\n", 10);
	_printf("%d\n", len1);
	len = (unsigned int)INT_MAX + 1024;
	len1 = _printf("unsigned: %u\n", len);
	_printf("%d\n", len1);
	len1 = _printf("octal: %o\n", 9);
	_printf("%d\n", len1);
	len1 = _printf("Rot13: %R\n", "Musangi");
	_printf("%d\n", len1);
	len1 = _printf("Binary: %b\n", 10);
	_printf("%d\n", len1);
	

	return (0);
}

