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

	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 25; i >= 0; i--)
		putchar(alphabet[i]);
	putchar('\n');
	return (0);
}
