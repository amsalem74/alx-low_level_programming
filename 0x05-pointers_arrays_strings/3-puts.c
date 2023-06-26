#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string. followed by a new line. to stdout
 * @str: string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
