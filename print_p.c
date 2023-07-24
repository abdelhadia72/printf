#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_p - Print the address of a pointer.
 * @list: The va_list that contains the pointer to print.
 * Return: Number of characters printed.
 */

int print_p(va_list list)
{
	void *ptr = va_arg(list, void*);
	char buffer[20];
	int num_len = 0;

	if (ptr == NULL)
	{
		num_len += _printf("(nil)");
	}
	else
	{
		snprintf(buffer, sizeof(buffer), "%p", ptr);
		num_len += _printf("%s", buffer);
	}

	return (num_len);
}
