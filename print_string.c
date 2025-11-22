#include "main.h"

/**
 * handle_string - handles the %s format specifier
 * @args: va_list containing the string argument
 *
 * Return: number of characters printed
 */
int handle_string(va_list args)
{
    char *str;
    int count;

    str = va_arg(args, char *);
    if (str == NULL)
        str = "(null)";

    count = 0;
    while (str[count])
    {
        _putchar(str[count]);
        count++;
    }

    return (count);
}
