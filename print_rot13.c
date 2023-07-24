#include "main.h"

/**
 * printf_rot13 - Applies the ROT13 encryption
 *
 * @list: va_list containing the variadic arguments.
 *
 * Return: The length of the encrypted string (int).
 */

int printf_rot13(va_list list)
{
	char *str = va_arg(list, char*);
	char *al = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, str_len = 0, j = 0;

	while (str[i])
	{
		j = 0;
		while (al[j])
		{
			if (str[i] == al[j])
			{
				_putchar(rot[j]);
				str_len++;
				break;
			}
			j++;
		}
		if (!al[j])
		{
			_putchar(str[i]);
			str_len++;
		}
		i++;
	}
	return (str_len);
}
