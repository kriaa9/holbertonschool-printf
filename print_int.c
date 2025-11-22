#include "main.h"

/**
 * print_number - prints a number recursively
 * @n: the number to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
    int count = 0;
    unsigned int num;

    if (n < 0)
    {
        count += _putchar('-');
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
        count += print_number(num / 10);

    count += _putchar((num % 10) + '0');

    return (count);
}

/**
 * handle_int - handles %d and %i format specifiers
 * @args: va_list containing the integer argument
 *
 * Return: number of characters printed
 */
int handle_int(va_list args)
{
    int n;

    n = va_arg(args, int);
    return (print_number(n));
}
