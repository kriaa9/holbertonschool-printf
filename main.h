#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/* Main printf function */
int _printf(const char *format, ...);

/* Helper functions */
int _putchar(char c);

/* Format handlers */
int handle_char(va_list args);
int handle_string(va_list args);
int handle_percent(va_list args);
int handle_int(va_list args);

/* Utility functions */
int print_number(int n);

#endif /* MAIN_H */
