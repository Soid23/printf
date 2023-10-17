#include "main.h"

/**
 * specifiers - handles format specifiers
 * @args: arguments
 * @format: format specifier
 * Return: counter
 */

int specifiers(const char *format, va_list args)
{
	int a = 0;
	int b = 0;
	int counter = 0;

	if (format[a] == 'c')
		counter += print_char(va_arg(args, int));
	else if (format[a] == 's')
		counter += print_string(va_arg(args, char *)b);
	else if (format[a] == 'd' || 'i')
		counter += print_int(va_arg(args, int));
	else if (format[a] == '%')
		counter += _putchar('%');
	else if (format[a] == 'b')
		counter += print_binary(va_arg(args, int));
	else if (format[a] == 'u')
		counter += print_38int(va_arg(args, unsigned int));
	else if (format[a] == 'o')
		counter += pint_8(va_arg(args,  int));
	else if (format[a] == 'x')
		counter += print_hexa(va_arg(args, int));
	else if (format[a] == 'X')
		counter += print_hex(va_arg(args, int));
	else if (format[a] == 'S')
		counter += print_S(va_arg(args, char *)b);
	else if (format[a] == 'R')
		counter += print_rot(va_ar(args, char *));
	else
	{
		counter += _putchar('%');
		counter += _putchar(format[a]);
	}
	return (counter);
}
