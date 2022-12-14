#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 *
 * Description: Check if n is lowercase
 *
 * @n: the last number
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("98");
	else
	{
		if (n < 98)
		{
			for (i = n; i <= 98; i++)
			{
				if (n == 98)
					printf("%d", n);
				else
					print("%d, ", n);
			}
		}
		else
		{
			for (i = n; i >= 98; i--)
			{
				if (n == 98)
					printf("%d", n);
				else
					printf("%d, ", n);
			}
		}
	}
	printf("\n");
}
