#include "main.h"

/**
 * _printf - A custom implementation of printf.
 * @format: A string containing format specifiers.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
int printed = 0;

va_list args;

va_start(args, format);

while (*format != '\0')
{
if (*format == '%')
{
format++;
printed = my_choice(format, args, printed);
format++;
}
else
{
_putchar(*format);
printed++;
format++;
}
}

va_end(args);
return (printed);
}
