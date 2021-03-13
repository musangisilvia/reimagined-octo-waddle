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
	char *str;
	char *c;
	
	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] != '%')
		{
			c = (char)format[i];
			_putchar(c);
			i++;
		}
		else 
		{
			i++;
			c = (char)format[i];
			/*Function to check specifier and run correct print*/
			get_ptr =  get_print_func(c);
			if (get_ptr == NULL)
			{
				b = (char)format[i - 1];
				if (c == '\0')
					_putchar(b);
					break;
				_putchar(b);
				_putchar(c);
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
	return (0) /*Supposed to be the length*/
}
