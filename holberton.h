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
void _write_buffer(char *buffer, int *index);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void format_s(va_list valist, char *buffer, int *index);
void format_c(va_list valist, char *buffer, int *index);
void format_d(va_list valist, char *buffer, int *index);
char *itos(char str[], long int num);
char *utos(char str[], int num);
int num_len(int num);
int float_len(double f);
void format_i(va_list valist, char *buffer, int *index);
void format_u(va_list valist, char *buffer, int *index);
void format_perc(va_list valist, char *buffer, int *index);
void format_p(va_list valist, char *buffer, int *index);
void format_lx(va_list valist, char *buffer, int *index);
char *tostring(char str[], int num);
int num_len(int num);
void reset_buffer(char buffer[]);
void *rot13(char *s);
void rev_string(char *s);
void format_h(va_list valist, char *buffer, int *index);
void format_ch(va_list valist, char *buffer, int *index);
void format_o(va_list valist, char *buffer, int *index);
void format_b(va_list valist, char *buffer, int *index);
void format_r(va_list valist, char *buffer, int *index);
void format_R(va_list valist, char *buffer, int *index);
#endif /* HOLBERTON_H */
