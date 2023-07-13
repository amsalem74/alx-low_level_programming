#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of size 'size' and assigns char 'c'
 * to each element
 * @size: size of the array
 * @c: char to assign
 *
 * Return: pointer to the created array, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
