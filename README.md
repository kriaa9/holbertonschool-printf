# my_printf — Simple custom printf in C

A minimal implementation of a `printf`-like function in C.  
Instead of using the standard library’s `printf`, this project provides a function named `_printf` that supports printing characters, strings, integers, and literal percent signs via a format string.

## What it does

- Parses a format string (like `"Hello %s, you are %d years old\n"`)  
- Replaces format specifiers with provided values (string, integer, char)  
- Outputs the final result character by character to standard output  
- Returns the count of printed characters (just like standard `printf`)  

This project helps to learn how formatting, variable arguments, and low-level output work under the hood in C.

## Project files and their roles

| File | Purpose |
|------|---------|
| `main.h` | Declares all functions used across the project; allows all source files to share common definitions. |
| `_printf.c` | Core of the project: defines `_printf(const char *format, ...)`. Parses the format string, detects placeholders, and directs printing tasks. |
| `_putchar.c` | Low-level helper: writes a single character to standard output. All printing operations go through this. |
| `print_char.c` | Handles the `%c` specifier: prints a single character argument. |
| `print_string.c` | Handles the `%s` specifier: prints a C-string (i.e. a `char *`) by outputting each character in turn. |
| `print_int.c` | Handles integer placeholders (`%d` / `%i`): converts an integer to its decimal string representation (handling negative values), then prints it. |
| `print_percent.c` | Handles `%%`: prints a literal `%`. |
| (optional) Documentation or manual files | Provide usage instructions or explain design decisions — not required for compilation but useful to understand how the project works. |

## How it works (in simple steps)

1. You write something like:

   ```c
   _printf("Hello %s! You have %d new messages.\n", username, msg_count);
