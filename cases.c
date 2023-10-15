#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include "main.h"

/**
 * my_choice - selects the appropriate format specifiers
 * @args: number of arguments
 * @printed: the printed characters
 * @format: the format specifier
 * Return: printed characters
 */
int my_choice(const char *format, va_list args, int printed)
{
if (*format == 'd' || *format == 'i')
{
printed = print_int(args, printed);
}
else if (*format == 'c')
{
print_char(args, printed);
printed++;
}
else if (*format == 's')
{
printed = print_str(args);
}
else if (*format == '%')
{
_putchar('%');
printed++;
}
return (printed);
}
