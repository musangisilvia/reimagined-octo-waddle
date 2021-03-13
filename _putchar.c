#include "holberton.h"

/**
  * _putchar - prints a character
  * @c: character to print
  * 
  * Return: 0 on success
  */
int _putchar(char c)
{
	char a[1];
	a[0] = (char)c;
	return (write(1, a, 1));
}
