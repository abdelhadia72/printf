#include "main.h"

/**
 * printf_string - Print a string
 * @list: The va_list that contains the string to print
 *
 * Return: Number of characters printed
 */

int printf_string(va_list list)
{
	const char *str = va_arg(list, const char*);
	int len;

	len = 0;

	while (*str)
	{
		putchar(*str);
		str++;
		len++;
	}
	return (len);
}
