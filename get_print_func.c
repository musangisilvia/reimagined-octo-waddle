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
		{'i', print_int}
	};

	int i;

	for (i = 0; i < 4; i++)
	{
		if (c == specifics[i].spec)
		{
			return (specifics[i].fspec);
		}
	}

	return (NULL);
}
