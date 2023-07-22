#include "main.h"

/**
 * _printf - Custom the printf function.
 *
 * @format: The format string
 * @...: Optional arguments
 *
 * Return: The total number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list list;

	va_start(list, format);
	int pr_chars = 0;
	struct convert_match m[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"d", printf_decimal},
		{"i", printf_decimal},
		{NULL, NULL},
	};
	int i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			int j = 0;

			while (m[j].tag)
			{
				if (*m[j].tag == format[i])
				{
					pr_chars += m[j].f(list);
					break;
				}
				j++;
			}
		}
		else
		{
			putchar(format[i]);
			pr_chars++;
		}
		i++;
	}
	va_end(list);
	return (pr_chars);
}
