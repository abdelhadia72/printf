#include "main.h"

/**
 * print_single_hex - Print a single character in hexadecimal format
 * @c: The character to print
 *
 * Return: Number of characters printed
 */
int print_single_hex(char c)
{
	int num_len = 0;
	char hex_digits[] = "0123456789ABCDEF";
	char hex_representation[2];

	hex_representation[0] = hex_digits[c >> 4];
	hex_representation[1] = hex_digits[c & 0x0F];

	_putchar('\\');
	_putchar('x');
	_putchar(hex_representation[0]);
	_putchar(hex_representation[1]);

	num_len += 4;

	return (num_len);
}

/**
 * printf_S - Print a string with special handling
 * @list: The va_list that contains the string to print
 *
 * Return: Number of characters printed
 */
int printf_S(va_list list)
{
	const char *str = va_arg(list, const char *);
	int num = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			num += print_single_hex(*str);
		}
		else
		{
			_putchar(*str);
			num++;
		}
		str++;
	}

	return (num);
}
