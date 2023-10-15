#include "main.h"
#include <unistd.h>
/**
 * print_char - prints a character
 * @args: the arguments to use
 * @printed: the printed characters
 * Return: printed characters
 */
int print_char(va_list args, int printed)
{
char character = va_arg(args, int);
write(1, &character, 1);
return (printed + 1);
}
