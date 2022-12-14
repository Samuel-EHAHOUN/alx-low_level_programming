#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: Check if n is lowercase
 *
 * @t: the number of table
 */

void print_times_table(int t)
{
	int i, j, n;

	for (i = 0; i <= t; i++)
	{
		for (j = 0; j <= t; j++)
		{
			n = i * j;
			if ((n < 10) && (j == 0))
				_putchar(n + '0');
			if ((n < 10) && (j != 0))
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			if (n >= 10)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');

			}
			if (j != t)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
