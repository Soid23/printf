#include "main.h"

/**
 * _printf - to select the right format to print
 * @format: the identifier
 * Return: length
 */
int _printf(const char *format, ...)
{
	check mate[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_per}, {"%d", print_decimal},
		{"%i", print_int}, {"%b", print_bin},
		{"%u", print_unsigned_int}, {"%o", print_oct},
		{"%x", print_hexa}, {"%X", print_hex},
		{"%S", print_str}, {"%p", print_pointer},
		{"%r", print_rev}, {"%R", print_rot}
	};
	va_list args;
	int a = 0, b;
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[a] != '\0')
	{
		b = 13;
		while (b >= 0)
		{
			if (mate[b].sym[0] == format[a] && mate[b].sym[1] == format[a + 1])
			{
				len = len + mate[b].f(args);
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
	va_end(args);
	return (len);
}
