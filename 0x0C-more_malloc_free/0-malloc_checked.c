#include "main.h"
#include <limits.h>
<<<<<<< HEAD
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
=======
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory to allocate
 *
 * Return: Pointer to the allocated memory
 * If malloc fails, exit with status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

>>>>>>> 68f0a12ee942575e640409dd73747cddd256ae14
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
