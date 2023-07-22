#include "main.h"

/**
 * printf_char - Print a character
 * @list: The va_list that contains the character to print
 * Return: Number of characters printed (always 1)
 */
int printf_char(va_list list)
{
	int c;

	c = va_arg(list, int);

	_putchar(c);
	return (1);
}
