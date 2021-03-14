#include "holberton.h"

/**
  * get_print_func - Get the correct print function and return a pointer to it
  * @c: The specifier
  *
  * Return: Pointer to correct print function
  */

int get_print_func(char c, char b, va_list args)
{
	
	switch (c)
	{
		case 'c':
			print_char(args);
			break;
		case 's':
			print_str(args);
			break;
		case '%':
			_putchar(b);
			_putchar(c);
			break;
		default:
			_putchar(b);
			_putchar(c);
			break;
	}
	return (0);
}
