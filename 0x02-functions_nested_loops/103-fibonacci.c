#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int som, a, b, pair;

	som = 0;
	a = 1;
	b = 2;
	pair = 2;
	do {
		if ((som % 2) == 0)
			pair = pair + som;
		som = a + b;
		a = b;
		b = som;
	} while (som <= 4000000);
	printf("%ld\n", pair);
	return (0);
}
