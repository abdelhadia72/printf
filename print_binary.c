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
	int binary_digits[sizeof(unsigned int) * 8];
	int i, j;

	for (i = 0; i < sizeof(unsigned int) * 8; i++)
	{
		binary_digits[i] = num & 1;
		num >>= 1;
	}
	j = sizeof(unsigned int) * 8 - 1;
	while (j >= 0 && binary_digits[j] == 0)
	{
		j--;
	}
	for (; j >= 0; j--)
	{
		_putchar(binary_digits[j] + '0');
	}
	return (i);
}
