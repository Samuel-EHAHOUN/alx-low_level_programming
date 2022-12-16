#include <stdio.h>
#include <math.h>

/**
  * main - prime factor of a big number
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	long int i, j;
	long int n = 612852475143;
	double racine = sqrt(n);

	for (i = 1; i <= racine; i++)
	{
		if (n % i == 0)
		{
			j = n / i;
		}
	}
	printf("%ld\n", j);

	return (0);
}
