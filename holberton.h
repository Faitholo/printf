#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 */
typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
int _printf(const char *format, ...);
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void format_s(va_list valist, char *buffer, int *index);
void format_c(va_list valist, char *buffer, int *index);
void format_d(va_list valist, char *buffer, int *index);
int num_len(int num);
int float_len(double f);
void format_i(va_list valist, char *buffer, int *index);
#endif /* HOLBERTON_H */
