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
int print_deci(va_list args);
int print_unsigned_int();
int print_hexa(void);
int print_hex(void);
int print_bin(void);
int print_oct(void);
int print_rot(void);
int print_pointer(void);
int print_8(va_list val);
int print_32int(va_list args);
int print_bin(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);


#endif
