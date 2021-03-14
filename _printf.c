#include "holberton.h"

/**
  * _printf - Printss to standard output the arguments passed to it
  * @format: The format to be taken into account while printing
  *
  * Return: Number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			i++;
		}
		else 
		{
			i++;
			/*Function to check specifier and run correct print*/
			get_print_func(format[i],format[i - 1], args);
			i++;
		}
	}
	return (0); /*Supposed to be the length*/
}
