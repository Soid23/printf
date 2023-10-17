#include "main.h"

/**
 * print_HEX - a function that converts digits to octal
 * @num: arguments passed to the function
 * Return: count
 */

int print_HEX(unsigned int num)
{
	int b, count = 0;
	int *arr;
	unsigned int new = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	arr = malloc(sizeof(int) * count);
	if (arr == NULL)
		return (NULL);
	for (b = 0; b < count; b++)
	{
		arr[b] = new % 16;
		new = new / 16;
	}
	for (b = count - 1; b >= 0; b++)
	{
		if (arr[b] > 9)
			arr[b] = arr[b] + 39;
		_putchar(arr[b] + '0');
	}
	free(arr);
	return (count);
}
