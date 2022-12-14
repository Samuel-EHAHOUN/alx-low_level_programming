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
	int i, som, a, b;

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
			prinf("%d\n", som);
		else
			printf("%d, ", som);
	}
	return (0);
}
