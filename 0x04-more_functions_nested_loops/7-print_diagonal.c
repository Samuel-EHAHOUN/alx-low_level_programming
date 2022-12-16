#include "main.h"

/**
 * print_diagonal - euhhh
 *
 * @n: numbre of uderscore
 *
 * Description: Check if n is lowercase
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(32);
			_putchar('\\');
			_putchar('\n');
		}
	}
}
