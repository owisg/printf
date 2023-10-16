#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

<<<<<<< HEAD
/**
* struct convert - defines a structure for symbols and functions
*
* @operator: The operator
* @assoc: The function associated
*/
struct converter
{
        char *operator;
        int (*assoc)(va_list);
};
typedef struct converter convert;

int cases(const char *format, convert convert_list[], va_list arg_list);
=======
int _putchar(char character);
int print_char(va_list args);
int print_str(va_list args, int printed);
int print_int(va_list args, int printed);
int my_choice(const char *format, va_list args, int printed);
>>>>>>> 74946c6bf67fac1dc152bc67781d76e5b33c8cec
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif
