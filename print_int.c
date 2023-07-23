#include "main.h"

/**
 * print_int - Print an integer to stdout
 * @n: The integer to be printed
 *
 * Return: Number of characters printed
 */

int print_int(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	} else
	{
		num = n;
	}

	if (num / 10)
	{
		count += print_int(num / 10);
	}

	_putchar((num % 10) + '0');
	count++;

	return (count);
}

/**
 * printf_decimal - Print an integer from the va_list
 * @list: The va_list containing the integer to be printed
 *
 * Return: Number of characters printed
 */

int printf_decimal(va_list list)
{
	int value = va_arg(list, int);

	return (print_int(value));
}
