#include "main.h"
/**
 * print_pointer - a function that print address
 * @arg: argument
 * Return: length
 */

int print_pointer(va_list arg)
{
	void *ptr;
	char *str = "(nil)";
	long int a;
	int b;

	ptr = va_arg(arg, void*);
	if (ptr == NULL)
	{
		for (b = 0; s[b] != '\0'; b++)
			_putchar(s[b]);
		return (b);

	a = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	b = print_HEX(a);
	return (b + 2);
}
