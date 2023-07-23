#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <stdio.h>


/* main funtion*/
int _printf(const char *format, ...);


/* struct */
struct convert_match {
        const char *tag;
        int (*f)(va_list);
};

/* handle funtions */
int printf_percent(va_list list);
int printf_string(va_list list);
int printf_char(va_list list);
int printf_decimal(va_list list);
int printf_binary(va_list list);
int printf_x(va_list list);
int printf_u(va_list list);
int printf_o(va_list list);
int printf_X(va_list list);

/* helper funtions */
int _putchar(char c);
int _strlen(char *s);
#endif
