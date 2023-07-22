#include "main.h"

int printf_binary(va_list list)
{
    unsigned int num = va_arg(list, unsigned int);
    int binary_digits[32];
    int i, j;
    // convert the number to binary
    for (i = 0; i < 32; i++)
    {
        binary_digits[i] = num & 1;
        num >>=1
    }
}
