#include "main.h"

/**
 * print_binary - changes to binary.
 * @val : argument.
 * Return: integer.
 */
int print_binary(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int d;

	for (i = 0; i < 32; i++)
	{
		d = ((a << (32 - i)) & num);
		if (d >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = d >> (31 - i);
			_putchar(b + 48);
			cont++;
		}

	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
