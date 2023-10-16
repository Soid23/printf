#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_str(char *str);
int print_string(va_list val);

#endif
