#include "holberton.h"

/**
  * _putchar - Prints a character
  * @c: Character to print
  *
  * Return: Number of printed bytes
  */
int _putchar(int c)
{
	char a[1];
	a[0] = (char)c;

	return (write(1, a, 1));
}



/**
  * print_num - Prints number to std output
  * @args: List of arguments
  *
  * Return: 0;
  */

int print_num(va_list args)
{
	int n  = va_arg(args, int);

	putchar_int(n);
	return (0);
}


/**
  * print_char - Prints a char to std output
  * @args: List of arguments
  *
  * Return: Not sure yet
  */
int print_char(va_list args)
{
	int c = va_arg(args, int);

	_putchar(c);
	return (0);
}


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
		str = "(null)";
	while (*str)
		_putchar(*str++);

	return (0);
}


/**
  * putchar_int - prints integers
  * @n: Number
  *
  */
void putchar_int(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		putchar_int(n / 10);

	_putchar((n % 10) + '0');
}
