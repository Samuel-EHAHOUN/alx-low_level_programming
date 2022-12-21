#include "main.h"

/**
 * print_array - check the code
 *
 * @a: the pointer
 *
 * @n: size
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
		_putchar(a[i]);
	_putchar('\n');
}
