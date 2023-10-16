#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
 * @args: the arguments to use
 * Return: printed characters
 */
int print_char(va_list args)
{
char character = va_arg(args, int);
write(1, &character, 1);
return (1);
}
