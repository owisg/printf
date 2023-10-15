#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char character);
int print_char(va_list args, int printed);
int print_str(va_list args);
int print_int(va_list args, int printed);
int my_choice(const char *format, va_list args, int printed);
int _printf(const char *format, ...);

#endif

