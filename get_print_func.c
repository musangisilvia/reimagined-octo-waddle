#include "holberton.h"

/**
  * get_print_func - Get the correct print function and return a pointer to it
  * @c: The specifier
  *
  * Return: Pointer to correct print function
  */

int (*get_print_func(char *c))(va_list args)
{
	op_t ops[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 3)
	{
		if (c[0] == ops[i].op[0])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
