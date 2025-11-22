#include "main.h"

/**
 * handle_char - handles the %c format specifier
 * @args: va_list containing the character argument
 *
 * Return: number of characters printed (always 1)
 */
int handle_char(va_list args)
{
    char c;

    c = va_arg(args, int);
    return (_putchar(c));
}
