#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @list: The va_list containing the unsigned int argument.
 * Return: The number of digits printed.
 */
int print_unsigned(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);
	unsigned int num_copy = n;
	unsigned int len = 0;
	unsigned int pow;
	int digits = 0;
	int i;

	do

	{
		digits++;
		num_copy /= 10;
	} while (num_copy != 0);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (digits > 0)
	{
		pow = 1;

		for (i = 1; i < digits; i++)
		{
			pow *= 10;
		}
		_putchar((n / pow) + '0');
		n %= pow;
		digits--;
		len++;
	}

	return (len);
}
