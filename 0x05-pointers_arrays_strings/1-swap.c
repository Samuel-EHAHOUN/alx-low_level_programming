#include "main.h"

/**
 * swap_int - fonction to swap two int
 *
 * @a: first interger
 *
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
