#include "main.h"

/**
 * print_line - euhhh
 *
 * @n: numbre of uderscore
 *
 * Description: Check if n is lowercase
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}

	_putchar('\n');
}
