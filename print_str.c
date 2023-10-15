#include "main.h"

/**
 * print_str - writes a string to stdout
 * @args: the argument containing the string
 * @printed: the current count of printed characters
 * Return: updated count of printed characters
 */
int print_str(va_list args, int printed)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
str = "(null)";
}
int len = 0;
while (str[len])
{
len++;
}
ssize_t written_byte = write(1, str, len);
if (written_byte < 0)
{
return (-1);
}
return (printed + written_byte);
}
