#include "holberton.h"

/**
  * _printchar - Prints a char to std output
  * @args: List of arguments
  *
  * Return: Not sure yet
  */

int print_char(va_list args)
{
	int c = (char)va_arg(ap, int);

	_putchar(c);
	return (0);
}
