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

	putchar('+');
	return (1);
}
else if (n == 0)
{
	putchar('0');
	return (0);
}
else
{
	putchar('-');
	return (-1);
	}
}
