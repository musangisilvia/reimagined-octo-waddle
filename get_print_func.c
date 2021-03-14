#include "holberton.h"

/**
  * get_print_func - Get the correct print function and return a pointer to it
  * @c: The specifier or current character
  * @b: The previous character
  * @args: List of arguments
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
			_putchar(c);
			break;
		case 'd':
		case 'i':
			print_num(args);
			break;
		default:
			_putchar(b);
			_putchar(c);
			break;
	}
	return (0);
}
