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
	char alphabet[26];

	int i;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);
	putchar("\n");
	return (0);
}
