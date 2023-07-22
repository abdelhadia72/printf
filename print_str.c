#include "main.h"

int printf_string(va_list list)
{
    const char *str = va_arg(list, const char*);
    int len;
    len = 0;
    
    while (*str) {
        putchar(*str);
        str++;
        len++;
    }
    return len;
}