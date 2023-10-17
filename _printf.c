#include "main.h"

/**
 * _printf - selects the right format to print
 * @format: the output format
 * Return: counter
 */

int _printf(const char *format, ...)
{
	int a = 0;
	int counter = 0;
	va_list ap;

	va_start(ap, format);
	while (format && format[a])
	{
		if (format[a] == '%')
		{
			a++;
			counter += handle_format(format + a, ap);
		}
		else
		{
			_putchar(format[a]);
			counter++;
		}
		a++;
	}
	va_end(ap);
	return (counter);
}
