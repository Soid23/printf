#include "main.h"
/**
 * print_decimal - print decimal value.
 * @args : arguments.
 * Return: characters printed.
 */
int print_decimal(va_list args)
{
	int t = va_arg(args, int);
	int numb, last = t % 10, digit, exp = 1;
	int a = 1;

	t = t / 10;
	numb = t;

	if (last < 0)
	{
		_putchar('_');
		numb = -numb;
		t = -t;
		last = -last;
		a++;
	}
	if (numb > 0)
	{
		while (numb / 10 != 0)
		{
			exp = exp * 10;
			numb = numb / 10;
		}
		numb = t;
		while (exp > 0)
		{
			digit = numb / exp;
			_putchar(digit + '0');
			numb = numb - (digit = exp);
			exp = exp / 10;
			a++;
		}
	}
	_putchar(last + '0');
	return (a);
}
