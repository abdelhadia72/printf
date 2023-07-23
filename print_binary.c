#include "main.h"

/**
 * printf_binary - Converts an unsigned integer to binary
 *
 * @list: The va_list containing the unsigned int argument.
 *
 * Return: The number of binary digits printed.
 */
int printf_binary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	unsigned int mask = 1 << (sizeof(unsigned int) * 8 - 1);
	int pr_chars = 0;
	int leading_zeros = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (mask)
	{
		if (num & mask)
		{
			_putchar('1');
			leading_zeros = 1;
		}
		else if (leading_zeros || mask == 1)
		{
			_putchar('0');
		}

		pr_chars++;
		mask >>= 1;
	}

	return (pr_chars);
}
