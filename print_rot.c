#include "main.h"

/**
 * print_rot - function that encodes a string rot13
 * @arg: the string to be encoded
 * Return: the encoded string
 */

int print_rot(va_list arg)
{
	int a, b;
	int h = 0;

	char *str = va_arg(arg, char *);
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (str == NULL)
		str = "(nil)";
	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; c[b] != '\0'; b++)
		{
			if (str[a] == c[b])
			{
				_putchar(d[b]);
				h = 1;
			}
		}
		if (!h)
		{
			_putchar(str[a]);
		}
	}
	return (a);
}
