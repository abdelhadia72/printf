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

	int num;
	if (!str)
		str = "(null)";
	
	num = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		num++;
	}
	return (num);
}
