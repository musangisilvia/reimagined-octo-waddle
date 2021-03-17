#include "holberton.h"

/**
  * get_print_func - Get the correct print function and return a pointer to it
  * @c: The specifier or current character
  * @b: The previous character
  * @args: List of arguments
  * @len: total number of characters printed.
  *
  * Return: length
  */

int get_print_func(char c, char b, va_list args, int len)
{
	switch (c)
	{
		case 'c':
			len = print_char(args, len);
			break;
		case 's':
			len = print_str(args, len);
			break;
		case '%':
			_putchar(c);
			len += _putchar(c);
			break;
		case 'd':
		case 'i':
			len = print_num(args, len);
			break;
		case 'b':
<<<<<<< HEAD
			len = print_positive(args, len);
=======
			len = print_bin(args, len);
>>>>>>> 3ade680fa08549a5770a3258115aa0eb9ded6db5
			break;
		default:
			len += _putchar(b);
			len += _putchar(c);
			break;
	}
	return (len);
}
