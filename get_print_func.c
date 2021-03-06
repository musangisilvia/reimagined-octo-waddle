#include "holberton.h"
/**
  *get_print_func - returns pointer to function.
  *@c: character to be used to find pointer function.
  *
  *Return: pointer to function or NULL.
  */

int (*get_print_func(char c))(va_list, int)
{
	forms specifics[] = {
		{'c', print_ch},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'u', print_unsignd},
		{'o', print_octal},
		{'x', print_hex},
		{'X', print_heX},
		{'R', print_rot13},
		{'b', print_b}
	};

	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == specifics[i].spec)
		{
			return (specifics[i].fspec);
		}
	}

	return (NULL);
}
