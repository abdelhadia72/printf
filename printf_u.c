#include "main.h"

/**
 * printf_u - Prints an unsigned
 *
 * @list: The va_list containing
 *
 * Return: The number of digits printed.
 */

int printf_u(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int num_len = 0;
	int div = 1;

	while ((num / div) > 9)
	{
		div *= 10;
	}
	while (div != 0)
	{
		_putchar((num / div) % 10 + '0');
		div /= 10;
		num_len++;
	}
	return (num_len);
}
