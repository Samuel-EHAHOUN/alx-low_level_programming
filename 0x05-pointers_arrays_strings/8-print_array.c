#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array
 *
 * @a: a pointer
 *
 * @n: number of element
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n == 1)
		printf("%d\n", *(a + n - 1));
	else
	{
		for (i = 0; i < n - 1; i++)
			printf("%d, ", *(a + i));
		printf("%d\n", *(a + n - 1));
	}
}
