#include "main.h"

/**
 * _printf - to select the right format to print
 * @format: the identifier
 * Return: length
 */

int _printf(const char *format, ...)
{
	select_match match[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_per}, {"%d", print_decimal},
		{"%i", print_int}, {"%b", print_binary},
		{"%u", print_unsigned_int}, {"%o", print_oct},
		{"%x", print_hexa}, {"%X", print_hex},
		{"%S", print_str}, {"%p", print_pointer},
		{"%r", print_rev}, {"%R", print_rot}
	};
	va_list ap;
	int a = 0, b;
	int len = 0;

	va_start(ap, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (match[b].sym[0] == format[a] && match[b].sym[1] == format[a + 1])
			{
				len = len + match[b].func(ap);
				a = a + 2;
				break;
			}
			b--;
		}
		if (b < 0)
		{
			_putchar(format[a]);
			len++;
			a++;
		}
		else if (format[a] == '\0')
			break;
	}
	va_end(ap);
	return (len);
}
