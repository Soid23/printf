#include "main.h"
/**
 * print_pointer - prints address
 * @val: arguments
 * Return: length
 */

int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;

	p= va_arg(val, void*);
	if (p == NULL)
	{
		for (b = 0; s[b] != '\0'; b++)
			_putchar(s[b]);
		return (b);
	}
        a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_HEX(a);
}
	  
