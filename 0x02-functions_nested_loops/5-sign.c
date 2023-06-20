#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *greater than zero equal or less than zero
 *
 * @n: The input number as an intger
 *
 * Return: 1 if n is greater than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
	
	_putchar('\n')
}

