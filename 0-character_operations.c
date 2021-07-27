#include "holberton.h"

/**
 * print_c - Print characters (%c)
 * @ar_list: Store the a list of characters
 * Return: num of parameters printed
 */
int print_c(va_list ar_list)
{
	int c = va_arg(ar_list, int);

	return (_putchar(c));
}

/**
* print_s - print string (%s)
* @ar_list: Store the a list of characters
* Return: num of parameters printed
*/
int print_s(va_list ar_list)
{
	int i, count = 0;
	char *str;

	str = va_arg(ar_list, char *);
	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);

	return (count);
}
