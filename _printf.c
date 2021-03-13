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
	int i = 0, j = 0;
	int (*get_ptr)(va_list);
	char *c = NULL;

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
			c[j] = (char)format[i];
			/*Function to check specifier and run correct print*/
			get_ptr =  get_print_func(c);
			if (get_ptr == NULL)
			{
				if (c == '\0')
					_putchar(format[i - 1]);
					break;
				_putchar(format[i - 1]);
				_putchar(format[i]);
				i++;
			}
			else
			{
				/*Call the correct print function with args*/
				get_ptr(args);
				i++;
			}
		}
	}
	return (0); /*Supposed to be the length*/
}
