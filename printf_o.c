#include "main.h"

/**
 * printf_o - Prints an unsigned integer
 *
 * @list: The va_list containing
 *
 * Return: The number of octal digits printed.
 */

int printf_o(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	int num_len = 0;
	int octal_digits[100];
	int i = 0;

	while (num != 0)
	{
		octal_digits[i++] = num % 8;
		num /= 8;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(octal_digits[i] + '0');
		num_len++;
	}
	return (num_len);
}
