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
_putchar(va_arg(args, int));
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
else if (*format == 'u')
{
printed = print_unsig(va_arg(args, unsigned int), printed);
}
else if (*format == 'o')
{
printed = print_oct(va_arg(args, unsigned int), printed);
}
else if (*format == 'x' || *format == 'X')
{
printed = print_hexa(va_arg(args, unsigned int), printed,
(*format == 'X') ? 1 : 0);
}
else if (*format == 'b')
{
printed = printf_binary(va_arg(args, unsigned int), printed);
}
return (printed);
}
