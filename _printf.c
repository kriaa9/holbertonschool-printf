#include "main.h"

/**
 * get_handler - gets the appropriate format handler
 * @specifier: the format specifier character
 *
 * Return: function pointer to handler, or NULL if not found
 */
int (*get_handler(char specifier))(va_list)
{
    int i;
    struct format_type
    {
        char spec;
        int (*handler)(va_list);
    } formats[] = {
        {'c', handle_char},
        {'s', handle_string},
        {'%', handle_percent},
        {'d', handle_int},
        {'i', handle_int},
        {'\0', NULL}
    };

    i = 0;
    while (formats[i].spec)
    {
        if (formats[i].spec == specifier)
            return (formats[i].handler);
        i++;
    }

    return (NULL);
}

/**
 * _printf - produces output according to a format
 * @format: character string containing format directives
 *
 * Return: number of characters printed (excluding null byte),
 *         or -1 on error
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0, i = 0;
    int (*handler)(va_list);

    if (format == NULL)
        return (-1);

    va_start(args, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0')
                return (-1);

            handler = get_handler(format[i + 1]);
            if (handler)
            {
                count += handler(args);
                i += 2;
                continue;
            }
            count += _putchar('%');
        }
        else
        {
            count += _putchar(format[i]);
        }
        i++;
    }

    va_end(args);
    return (count);
}
