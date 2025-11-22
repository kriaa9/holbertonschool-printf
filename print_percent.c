#include "main.h"

/**
 * handle_percent - handles the %% format specifier
 * @args: va_list (unused)
 *
 * Return: number of characters printed (always 1)
 */
int handle_percent(va_list args)
{
    (void)args;
    return (_putchar('%'));
}
