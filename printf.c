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
	int pr_chars;
	int i = 0;
	int j;
	struct convert_match m[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{NULL, NULL},
	};
	pr_chars = 0;
	va_start(list, format);
	if (!format || (format[i] == '%' && (!format[i + 1] || format[i + 1] == ' '))
			|| format[0] == '%' && format[i + 1] == ' ' || !format[i + 2])
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			j = 0;
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
			_putchar(format[i]);
			pr_chars++;
		}
		i++;
	}
	va_end(list);
	return (pr_chars);
}
