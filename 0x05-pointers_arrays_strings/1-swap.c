#include "main.h"

/**
 * swap_int - check the code
 *
 * @a: a pointer
 *
 * @b: also a pointer
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	int *a = *b;
	int *b = tmp;
}
