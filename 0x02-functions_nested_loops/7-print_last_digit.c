#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: Check if n is lowercase
 *
 * @n: is the character to test
 *
 * Return: return the last digit
 */

int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		n = -n;
	digit = n % 10;
	_putchar(digit + '0');
	return (digit);
}