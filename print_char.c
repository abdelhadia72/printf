#include "main.h"

int printf_char(va_list list)
{
    int c = va_arg(list, int);
    putchar(c);
    return 1;
}