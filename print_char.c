#include "main.h"

/**
 * print_char - function that prints char to stdout
 * @arg: arguments passed to it
 * @val - variable argument
 * Return: 1
 */
int print_char(va_list arg)
{
	char str;

	str = va_list(arg, int);
	_putchar(str);
	return (1);
}
