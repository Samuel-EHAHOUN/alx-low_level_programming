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
	int abs;

	abs = _abs(n) % 10;
	_putchar(abs);
	return (abs);
}
