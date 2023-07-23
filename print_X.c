#include "main.h"

/**
 * printf_X - Prints an unsigned integer
 *
 * @list: The va_list containing
 *
 * Return: The number of uppercase
 */

int printf_X(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int num_len = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char hex_representation[100];
	int i = 0;

	while (num != 0)
	{
		hex_representation[i++] = hex_digits[num % 16];
		num /= 16;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(hex_representation[i]);
		num_len++;
	}
	return (num_len);
}
