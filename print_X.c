#include "main.h"

/**
 * printf_X - Prints an unsigned integer in uppercase hexadecimal format.
 * @list: The va_list containing the unsigned integer argument.
 * Return: The number of hexadecimal digits printed.
 */

int printf_X(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int num_len = 0;
	char hex_digits_upper[] = "0123456789ABCDEF";
	char hex_representation[100];
	int i = 0;

	while (num != 0)
	{
		hex_representation[i++] = hex_digits_upper[num % 16];
		num /= 16;
	}

	if (i == 0)
	{
		_putchar('0');
		num_len++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hex_representation[i]);
		num_len++;
	}

	hex_representation[num_len] = '\0';

	return num_len;
}
