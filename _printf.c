#include "main.h"
#include <stdio.h>

/**
 * _printf - prints a formatted argument, returns the number of printed chars
 * @formt: input argument
 *
 * Return: int
 */
int _printf(const char *formt, ...)
{
	unsigned int len = 0, i = 0;
	va_list args;

	va_start(args, formt);

	if (!formt || (formt[i] == '%' && !formt[i + 1]))
		return (-1);

	while (formt[i] != '\0')
	{
		if (formt[i] == '%')
		{
			switch (formt[i + 1])
			{
			case 'c':
				len += ptr_char(va_arg(args, int));
				i++;
				break;
			case 's':
				len += ptr_str(va_arg(args, char *));
				i++;
				break;
			case '%':
				len += ptr_char('%');
				i++;
				break;
			default:
				len += ptr_char('%');
				break;
			}
		}
		else
		{
			ptr_char(formt[i]);
			len++;
		} i++;
	}

	va_end(args);
	return (len);
}
