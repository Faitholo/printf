#include "holberton.h"

/**
* print_d - Print decimal (Base 10) digits (%d)
* @ar_list: Store the value of arguments
* Return: Counter print numbers
*/
int print_d(va_list ar_list)
{
	unsigned int num_Absolute, aux_Num, count_Zero, count;
	int numbers;

	count = 0;

	numbers = va_arg(ar_list, int);

	if (numbers < 0)
	{
		num_Absolute = (numbers * -1);
		count += _putchar(45);
	}
	else
		num_Absolute = numbers;

	aux_Num = num_Absolute;
	count_Zero = 1;
	while (aux_Num > 9)
	{
		aux_Num /= 10;
		count_Zero *= 10;
	}

	while (count_Zero >= 1)
	{
		count += _putchar(((num_Absolute / count_Zero) % 10) + '0');
		count_Zero /= 10;
	}
	return (count);
}
/**
* print_i - Print the integers (%i)
* @ar_list: Store list numbers
* Return: Number print
*/
int print_i(va_list ar_list)
{
	return (print_d(ar_list));
}
