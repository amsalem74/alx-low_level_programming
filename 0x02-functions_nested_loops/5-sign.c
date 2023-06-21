#include "main.h"
#include <stdio.h>
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
		putchar('1');
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
	n *= -1;
	   }
    /* print digits of n */
    if (n >= 100)
        putchar(n / 100 + '0');
    if (n >= 10)
        putchar((n / 10) % 10 + '0');
    putchar(n % 10 + '0');
    return -1;
}
	return (-1);
	}
}
