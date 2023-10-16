#include "main.h"
/**
 * _strlen - returns length of string.
 * @str : pointer.
 * Return : value of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != 0 : i++)
		;
	return (i);
}
/**
 * _strlenc - strlen function,used for constant.
 * @str : char pointer.
 * Return : 1
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != 0 : i++)
		;
	return (i);
}
