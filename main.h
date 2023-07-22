#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <stdarg.h>
#include <stdio.h>


/* main funtion*/
int _printf(const char *format, ...);


/* struct */
struct convert_match {
        char *tag;
        int (*f)(va_list);
};

/* handle funtions */
int printf_percent(va_list list);
int printf_string(va_list list);
int printf_char(va_list list);
int printf_decimal(va_list list);

/* helper funtions */
int _putchar(char c);
int _strlen(char *s);
#endif
