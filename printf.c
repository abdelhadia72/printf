#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

int _printf(const char *format, ...);


struct convert_match {
    const char *id;
    int (*handler)(va_list);
};


int handle_char(va_list list);
int handle_string(va_list list);
int handle_percent(va_list list);

int _printf(const char *format, ...) {
    va_list list;
    va_start(list, format);
    int pr_chars = 0;


    struct convert_match m[] = {
        {"%c", handle_char},
        {"%s", handle_string},
        {"%%", handle_percent},
    };

    while (*format) {
        if (*format == '%') {
            format++;
            int i = 0;
            while (i < sizeof(m) / sizeof(m[0])) {
                if (strcmp(m[i].id, format) == 0) {
                    pr_chars += m[i].handler(list);
                    format += strlen(m[i].id);
                    break;
                }
                i++;
            }
        } else {
            putchar(*format);
            pr_chars++;
        }
        format++;
    }

    va_end(list);
    return pr_chars;
}

int handle_char(va_list list) {
    int c = va_arg(list, int);
    putchar(c);
    return 1;
}

int handle_string(va_list list) {
    const char *str = va_arg(list, const char*);
    int len = 0;
    while (*str) {
        putchar(*str);
        str++;
        len++;
    }
    return len;
}

int handle_percent(va_list list) {
    putchar('%');
    return 1;
}
