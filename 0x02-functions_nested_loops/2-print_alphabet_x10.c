#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: 'the program's description'
 *
 */

void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
