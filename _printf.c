#include "main.h"

/**
 * _printf - A custom implementation of printf.
 * @format: A string containing format specifiers.
 * Return: The number of characters printed.
 */

int _printf(const char *format, ...)
{
int print;
convert cases_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{NULL, NULL}
};
va_list arg_list;

<<<<<<< HEAD
if (format == NULL)
return (-1);
va_start(arg_list, format);
/*Calling parser function*/
print = cases(format, cases_list, arg_list);
va_end(arg_list);
return (print);
=======
va_list args;

va_start(args, format);
if (format == NULL)
{
return (0);
}
while (*format != '\0')
{
if (*format == '%')
{
format++;
printed = my_choice(format, args, printed);
}
else
{
_putchar(*format);
printed++;
}
format++;
}
va_end(args);
return (printed);
>>>>>>> 74946c6bf67fac1dc152bc67781d76e5b33c8cec
}
