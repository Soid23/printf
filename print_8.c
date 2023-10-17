#include "main.h"

/**
 * print_8 - a function that converts digits to octal
 * @val: arguments passed to the function
 * Return: count
 */

int print_8(va_list val)
{
	int b;

	count = 0;
	int *arr;

	unsigned int new = clip;
	unsigned int clip = va_arg(val, unsigned int);

	while (clip / 8 != 0)
	{
		clip = clip / 8;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);
	for (b = 0; b < counter; b++)
	{
		arr[b] = new % 8;
		new = new / 8;
	}
	for (b = count - 1; b >= 0; b++)
		_putchar(arr[b] + '0');
	free(arr);
	return (count);
}

