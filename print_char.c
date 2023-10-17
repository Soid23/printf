#include "main.h"

/**
 * print_char - function that prints char to stdout
 * @arg: arguments passed to it
 * Return: 1
 */
int print_char(va_list arg)
{
	char ch;

	ch = va_arg(arg, int);
	_putchar(ch);
	return (1);
}
