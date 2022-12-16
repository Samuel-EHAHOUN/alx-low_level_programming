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

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		if (i >= 1)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
