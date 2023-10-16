#include "main.h"
#include <unistd.h>

/**
 * print_char - prints a character
<<<<<<< HEAD
 * @list: the arguments to use
 * Return: printed characters
 */
int print_char(va_list list)
{
_putchar(va_arg(list, int));
=======
 * @args: the arguments to use
 * Return: printed characters
 */
int print_char(va_list args)
{
char character = va_arg(args, int);
write(1, &character, 1);
>>>>>>> 74946c6bf67fac1dc152bc67781d76e5b33c8cec
return (1);
}
