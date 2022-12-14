#include "main.h"

/**
 * times_table - Entry point
 *
 * Description: Check if n is lowercase
 */

void times_table(void)
{
	int i,j,n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if ((n < 10) && (j == 0))
				_putchar(n + '0');
			if ((n < 10) && (i == 0) && (j != 0))
			{
				_putchar(' ');
				_putchar(n + '0');
			}
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
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
