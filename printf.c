#include "main.h"

int handle_format(const char **format, va_list list);
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

	va_start(list, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			pr_chars += handle_format(&format, list);
		}
		else
		{
			_putchar(*format);
			pr_chars++;
		}
		format++;
	}
	va_end(list);
	return (pr_chars);
}

/**
 * handle_format - Handle the format specifier.
 * @format: Pointer to the format string.
 * @list: Argument list.
 * Return: The number of characters printed for the current format specifier.
 */
int handle_format(const char **format, va_list list)
{

	int pr_chars = 0;
	int found_match = 0;

	struct convert_match m[] = {
		{"c", printf_char},
		{"s", printf_string},
		{"%", printf_percent},
		{"b", printf_binary},
		{NULL, NULL},
	};

	int i = 0;

	while (m[i].tag)
	{
		if (**format == *(m[i].tag))
		{
			pr_chars += m[i].f(list);
			found_match = 1;
			break;
		}
		i++;
	}

	if (!found_match)
	{
		_putchar('%');
		_putchar(**format);
		pr_chars += 2;
	}

	return (pr_chars);
}
