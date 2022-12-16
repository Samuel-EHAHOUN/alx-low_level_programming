#include "main.h"

/**
 * print_square - euhhh
 *
 * @n: numbre of uderscore
 *
 * Description: Check if n is lowercase
 */

void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
