#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(int c);
int _printf(const char *format, ...);

int get_print_func(char, char, va_list args); 
int print_char(va_list args);
int print_str(va_list args);
int print_num(va_list args);
void putchar_int(int n);

#endif
