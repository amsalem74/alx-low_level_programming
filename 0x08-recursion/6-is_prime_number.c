#include "main.h"

/**
 * is_prime_helper - Recursive helper function to check if a number is prime
 * @n: The number to check
 * @i: The divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0)
	{
		if (i == 1)
			return (1);
		else
			return (0);
	}

	return (is_prime_helper(n, i - 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, n - 1));
}
