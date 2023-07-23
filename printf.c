#include "main.h"

/**
 * _printf - Custom the printf function.
 *
 * @format: The format string
 * @...: Optional arguments
 * Return: The total number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list list;
	int pr_chars = 0;
	int i = 0;
	int j;
	int found_match = 0;

	struct convert_match m[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{NULL, NULL},
	};

	va_start(list, format);

	if (!format)
		return (-1);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			found_match = 0;

			j = 0;
			while (m[j].tag)
			{
				if (*m[j].tag == format[i])
				{
					pr_chars += m[j].f(list);
					found_match = 1;
					break;
				}
				j++;
			}

			if (!found_match)
			{
				_putchar('%');
				_putchar(format[i]);
				pr_chars += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			pr_chars++;
		}
		i++;
	}
	va_end(list);
	return (pr_chars);
}
