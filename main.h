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
<<<<<<< HEAD
=======
int print_unsigned_int();
int print_hexa();
int print_hex();
int print_bin();
int print_oct();
int print_rot();
int print_pointer();
>>>>>>> 4dd5d7613c1b25c416550d4c7ba25ef7b9dc60d6
int print_8(va_list val);
int print_32int(va_list args);
int print_bin(va_list val);
int _strlen(char *str);
<<<<<<< HEAD
=======
int _strlenc(const char *str);

>>>>>>> 4dd5d7613c1b25c416550d4c7ba25ef7b9dc60d6

#endif
