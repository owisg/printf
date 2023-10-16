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
if (*format == 'c')
{
_putchar(va_arg(args, int));
printed++;
}
else if (*format == 's')
{
printed = print_str(args,printed);
printed++;
}
else if (*format == '%')
{
_putchar('%');
printed++;
}
return (printed);
}
