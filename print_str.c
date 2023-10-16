#include "main.h"

/**
 * print_str - writes a string to stdout
 * @args: the argument containing the string
 * Return: updated count of printed characters
 */
int print_str(va_list args, int printed)
{
char *string = va_arg(args, char *);

while (*string != '\0')
{
_putchar(*string);
printed++;
string++;
}
return (printed);
}
