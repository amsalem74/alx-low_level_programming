#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to find the square root of
 *
 * Return: The square root of n, or -1 if no natural square root exists
 */
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return n;
    return sqrt_helper(n, 1, n);
}

/**
 * sqrt_helper - Recursive helper function to find the square root
 * @n: The number to find the square root of
 * @start: The starting point for the search range
 * @end: The ending point for the search range
 *
 * Return: The square root of n, or -1 if no natural square root exists
 */
int sqrt_helper(int n, int start, int end)
{
    int mid = (start + end) / 2;

    if (mid * mid == n)
        return mid;
    if (mid * mid < n)
    {
        if ((mid + 1) * (mid + 1) > n)
            return -1;
        return sqrt_helper(n, mid + 1, end);
    }
    return sqrt_helper(n, start, mid - 1);
}

