#include "main.h"

/**
 * printf_percent - Print the percent character
 * @list: The va_list (unused in this function)
 * Return: Number of characters printed (always 1)
 */

int printf_percent(va_list list)
{
	putchar('%');
	putchar('\n');
	return (1);
}
