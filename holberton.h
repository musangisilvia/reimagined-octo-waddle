#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(int c);
int _printf(const char *format, ...);

int get_print_func(char, char, va_list, int); 
int print_char(va_list, int);
int print_str(va_list, int);
int print_num(va_list, int);
int putchar_int(int, int);
<<<<<<< HEAD

=======
int print_unsigned(va_list, int);
int print_binary(int, int);
>>>>>>> ce0419f0b14c8d917315b58e968b8e0d3d675003
#endif
