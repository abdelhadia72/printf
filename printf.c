#include "main.h"

int printf_char(va_list list);
int printf_string(va_list list);
int printf_percent(va_list list);

int _printf(const char *format, ...) {
    va_list list;
    va_start(list, format);
    int pr_chars = 0;

    struct convert_match m[] = {
        {"c", printf_char},
        {"s", printf_string},
        {"%", printf_percent},
        {NULL, NULL},
    };

    int i = 0;
    while (format[i])
    {
            if (format[i] == '%')
            {
                    i++;
                    int j = 0;
                    while (m[j].tag)
                    {
                            if (*m[j].tag == format[i])
                            {
                                    pr_chars += m[j].f(list);
                                    break;
                            }
                            j++;
                    }
            }
            else
            {
                    putchar(format[i]);
                    pr_chars++;
            }
            i++;
    }

    va_end(list);
    return pr_chars;
}