#include "main.h"

/**
 * print_sign - Entry point
 *
 * Description: Check if n is lowercase
 *
 * @n: is the character to test
 *
 * Return: 1 if it's positive, '-1' if it's negative  and 0 if it's zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
