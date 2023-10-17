#include "main.h"

/**
 * print_rev - prints string in reverse
 * @args: arguments
 * Return: reversed string
 */

int print_rev(va_list args)
{
	char *s = va_arg(args, char *);
	int a;
	int b = 0;

	if (s == NULL)
		s = "(null)";
	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
		_putchar(s[a]);
	return (b);
}
