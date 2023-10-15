#include "main.h"

/**
 * print_int - Print an integer.
 * @args: A va_list containing the integer to be printed.
 * @printed: The count of characters printed so far.
 * Return: The total count of characters printed.
 */
int print_int(va_list args, int printed)
{
int i;
int digit;
int temp;
int pow10;
int num = va_arg(args, int);
int digits = 0;

if (num < 0)
{
printed = printed + _putchar('-');
num = -num;
}

if (num == 0)
{
printed = printed + _putchar('0');
return (printed);
}

temp = num;
while (temp != 0)
{
digits++;
temp = temp / 10;
}

pow10 = 1;
for (i = 1; i < digits; i++)
{
pow10 = pow10 * 10;
}

while (pow10 > 0)
{
digit = num / pow10;
printed = printed + _putchar(digit + '0');
num -= digit *pow10;
pow10 = pow10 / 10;
}

return (printed);
}
