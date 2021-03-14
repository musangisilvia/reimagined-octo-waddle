#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _putchar(int c);
int _printf(const char *format, ...);

int get_print_func(char, char, va_list args); 
int print_char(va_list args);
int print_str(va_list args);

#endif
