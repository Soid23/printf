#include "main.h"
<<<<<<< HEAD

/**
 * print_8 - a function that converts digits to octal
 * @val: arguments passed to the function
 * Return: count
 */

=======
/**
 * print_8 - print octal numbers
 * @arg: argument passed
 * Return: count
 */
>>>>>>> 50525e180249841944fee5029cd86f4e4598d675
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

<<<<<<< HEAD
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
=======
	while (num / 8 != 0)
}
>>>>>>> 50525e180249841944fee5029cd86f4e4598d675
