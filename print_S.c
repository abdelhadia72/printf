#include "main.h"

/**
 * printf_S - Print a string with special handling for non-printable characters.
 * @list: The va_list that contains the string to print
 *
 * Return: Number of characters printed
 */
int printf_S(va_list list)
{
    const char *str = va_arg(list, const char *);
    int num = 0;

    if (!str)
        str = "(null)";

    while (*str)
    {
        if (*str < 32 || *str >= 127)
        {
            _putchar('\\');
            _putchar('x');
            if (*str < 16)
                _putchar('0');
            num += 3;
            num += printf_x(list);
        }
        else
        {
            _putchar(*str);
            num++;
        }
        str++;
    }

    return (num);
}
