#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char character);
int print_char(va_list args);
int print_str(va_list args);
int print_int(va_list args, int printed);
int my_choice(const char *format, va_list args, int printed);
int _printf(const char *format, ...);
int print_hexa(unsigned int num, int printed, int uppercase);
int print_oct(unsigned int num, int printed);
int print_unsigned(unsigned int num, int printed);

#endif

