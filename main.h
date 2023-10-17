#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - specify print functions
 * @sym: pointer to specifier
 * @f: pointer to function
 */

typedef struct format
{
	char *sym;
	int (*f)();
} mate;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(char *str);
int print_string(va_list val);
int print_per(void);
int _strlen(char *str);
int _strlenc(const char *str);
int print_decimal(va_list args);
int print_8(va_list val);
int print_32int(va_list args);
int print_binary(va_list val);

#endif
