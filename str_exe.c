#include "main.h"
/**
 *  print_str_ex - print exclusuives string.
 *  @arg: argumen
 *  Return: the length of the string
 */


int print_str_ex(va_list arg)
{
	char *s;
	int j, length = 0;
	int mate;

	s = va_arg(arg, char *);
	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < 32 || s[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = len + 2;
			mate = s[j];
			if (mate < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_c(mate);
		}
		else
		{
			_putchar(str[j]);
			length++;
		}
	}
	return (length);
}
