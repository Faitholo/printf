#include "holberton.h"

/**
 * print_b - Convert of decimals in binary
 * @binary_list: Store the argumen values
 * Return: The count
 */

int print_b(va_list binary_list)
{
	unsigned int i, count, Num, binary, arr[32];

	i = 0, count = 0;
	Num = va_arg(binary_list, int);

	if (Num < 1)
	{
		_putchar(48);
		count++;
		return (count);
	}
	else
	{
		while (Num > 0)
		{
			binary = Num % 2;
			Num /= 2;
			arr[count] = binary;
			count++;
		}
		i = count - 1;
		while (i > 0)
		{
			_putchar('0' + arr[i]);
			i--;
		}
		_putchar('0' + arr[i]);
	}
	return (count);
}
