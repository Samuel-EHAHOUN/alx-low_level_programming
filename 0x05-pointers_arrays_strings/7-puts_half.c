#include "main.h"

/**
 * puts_half - print the half of a string
 *
 * @str: the string
 */

void puts_half(char *str)
{
	int n, i;
	int size = 0;

	while (*(str + size) != '\0')
	{
		size++;
	}
	if (size % 2 == 0)
		n = size / 2;
	else
		n = (size - 1) / 2;
	for (i = n; i < size; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
