#include "holberton.h"

/**
  * print_str - Prints a string to std output
  * @args: List of arguments
  *
  * Return: Not sure yet
  */

int print_str(va_list args)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
		str = "(null";
	while (*str)
	{
		_putchar(*str++);
	}

	return (0);
}
