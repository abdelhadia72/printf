#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>


/* main funtion*/
int _printf(const char *format, ...);

/**
 * struct matching - A structure to hold format specifiers and their handlers.
 * Description: this is a structure
 * @tag: The format specifier tag (e.g., "c", "s", etc.).
 * @f: The function pointer to the corresponding format specifier handler.
 */
typedef struct convert_match
{
	const char *tag;
	int (*f)(va_list);
} matching;

/* handle funtions */
int printf_percent(va_list list);
int printf_string(va_list list);
int printf_char(va_list list);
int printf_decimal(va_list list);
int printf_binary(va_list list);
int print_unsigned(va_list list);
int printf_x(va_list list);
int printf_u(va_list list);
int printf_o(va_list list);
int printf_X(va_list list);
int printf_S(va_list list);
int print_p(va_list list);
int printf_reverse(va_list list);

/* helper funtions */
int _putchar(char c);
int _strlen(char *s);

#endif
