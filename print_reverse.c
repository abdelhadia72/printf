#include "main.h"

/**
 * printf_reverse - Prints a string in reverse
 *
 * @list: va_list containing the variadic arguments.
 *
 * Return: The length of the string (int).
 */

int printf_reverse(va_list list)
{
	char *str = va_arg(list, char*);
	int i = 0;
	int str_len = 0;

	while (str[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		str_len++;
		i--;
	}
	return (str_len);
}
