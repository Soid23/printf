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

typedef struct mate
{
	char *sym;
	int (*f)();
} check_mate;

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
int print_int(va_list args);
int print_hex(va_list val);
int print_hexa(va_list val);
int print_HEX(unsigned int num);
int print_pointer(va_list arg);
int print_hex_c(va_list arg);
int get_size(const char *format, int *i);
int handle_format(const char *format, va_list args);

#endif
