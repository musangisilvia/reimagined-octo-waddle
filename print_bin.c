#include "holberton.h"

/**
  * print_bin - Prints the binary format of the number given
  * @args: Arguments list
  * @len: Length of string
  *
  * Return: The new length
  */

int print_bin(va_list args, int len)
{
	int n = va_arg(args, int);

	if (n < 0)
		return (len);
	else
		len = print_bin_num(n, len);
	return (len);
}

/**
  * print_bin_num - Prints Binary
  * @n: Number
  * @len: Length
  *
  * Return: 
  */
int print_bin_num(int n, int len)
{
	if (n < 0)
	{
		return (len);
	}
	if ((n / 2) != 0)
		print_bin_num((n / 2), len);

	len += _putchar((n % 2) + '0');
	return (len);
}








