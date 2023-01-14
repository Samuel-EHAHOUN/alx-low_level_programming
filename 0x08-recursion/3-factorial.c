#include "main.h"

/**
 * factorial - eeeeee
 *
 * @n: uhhh
 *
 * Return: an int
 */

int factorial(int n)
{
	if (n < 0)
		n = (-1) * n;
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
