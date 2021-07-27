#ifndef __HOLBERTON_H__
#define __HOLBERTON_H__

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct printer - format printer struct
 * @spec: the format specifier
 * @fn: the function that handles spec
 */
typedef struct printer
{
	char *spec;
	int (*fn)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_space(va_list ap);
int print_int(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);
int print_digit(int num, int *count);
int print_unsigned_digit(unsigned int num, int *count);
int print_digit_octal(unsigned int num, int *count);
int call_print_fn(char ch, va_list ap);


#endif /* __HOLBERTON_H__ */
