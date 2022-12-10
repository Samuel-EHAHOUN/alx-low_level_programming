#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	char alphabet[] = "0, 1, 2, 3, 4, 5, 6, 7, 8, 9";

	for (i = 0; i < 28; i++)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
