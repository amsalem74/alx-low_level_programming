#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number to compute the square root of.
 *
 * Return: the natural square root of `n`, or -1 if `n` does not have a
 * natural square root.
 */
int _sqrt_helper(int n, int low, int high);

int _sqrt_recursion(int n)
{
    if (n < 0)
        return (-1);
    return (_sqrt_helper(n, 0, n));
}

int _sqrt_helper(int n, int low, int high)
{
    int mid;

    if (low > high)
        return (-1);

    mid = (low + high) / 2;

    if (mid * mid == n)
        return (mid);

    if (mid * mid > n)
        return (_sqrt_helper(n, low, mid - 1));

    return (_sqrt_helper(n, mid + 1, high));
}
