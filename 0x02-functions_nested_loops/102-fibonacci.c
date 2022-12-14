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
	long int som, a, b;

	int i;

	som = 0;
	a = 1;
	b = 2;
	printf("1, 2, ");
	for (i = 0; i < 48; i++)
	{
		som = a + b;
		a = b;
		b = som;
		if (i == 47)
			printf("%ld\n", som);
		else
			printf("%ld, ", som);
	}
	return (0);
}
