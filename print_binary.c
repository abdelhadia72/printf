#include "main.h"

int printf_binary(va_list list)
{
    unsigned int num = va_arg(list, unsigned int);
    int binary_digits[sizeof(unsigned int) * 8];
    int i, j;

    // Convert the number to binary
    for (i = 0; i < sizeof(unsigned int) * 8; i++)
    {
        binary_digits[i] = num & 1;
        num >>= 1;
    }

    // Skip leading zero
    j = sizeof(unsigned int) * 8 - 1;
    while (j >= 0 && binary_digits[j] == 0)
    {
        j--;
    }
    
    // print the binary representation
    for (; j >= 0; j--)
    {
        _putchar(binary_digits[j] + '0');
    }
    return (i);
}
