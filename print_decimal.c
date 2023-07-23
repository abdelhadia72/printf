#include "main.h"

/**
 * printf_decimal - Print a decimal number
 * @list: The va_list that contains the decimal number to print
 *
 * Return: Number of characters printed
 */

int printf_decimal(va_list list)
{
	int num = va_arg(list, int);
	int num_len = 0;
	int is_negative = 0;

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
		_putchar('-');
		num_len++;
	}

	int temp = num;
	do
	{
		temp /= 10;
		num_len++;
	} while (temp != 0);

	int divisor = 1;
	for (int i = 1; i < num_len; i++)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		int digit = num / divisor;
		_putchar(digit + '0');
		num %= divisor;
		divisor /= 10;
	}
	return num_len;
}
