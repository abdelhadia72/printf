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
	int count = 0;
	int is_negative = 0;
	int num_digits;
	int temp;
	int divisor;
	int i;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	if (num < 0)
	{
		is_negative = 1;
		num = -num;
		_putchar('-');
		count++;
	}
	num_digits = 0;
	int temp;

	while (temp)
	{
		temp /= 10;
		num_digits++;
	}
	divisor = 1;

	for (i = 1; i < num_digits; i++)
		divisor *= 10;
	while (divisor)
	{
		int digit = num / divisor;

		_putchar('0' + digit);
		num %= divisor;
		divisor /= 10;
		count++;
	}
	return (count + is_negative);
}
