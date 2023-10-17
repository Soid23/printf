#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

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
int print_bin(va_list val);

#endif
