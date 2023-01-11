#include "main.h"

/**
 * reverse_array - euhhh
 *
 * @a: the array
 *
 * @n: size of array
 */

void reverse_array(int *a, int n)
{
	int i;
	char tmp[1000];

	for (i = 0; i < n; i++)
		tmp[i] = a[i];
	for(i = 0; i < n; i++)
		a[i] = tmp[n - i - 1];
}
