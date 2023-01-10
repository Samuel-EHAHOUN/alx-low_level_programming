#include "main.h"

/**
 * puts2 - put
 *
 * @str: a string
 */

void puts2(char *str)
{
	int i;
	int size = 0;

	while (*(str + size) != '\0')
	{
		if (size % 2 == 0)
			_putchar(*(str + size));
		size++;
	}
	_putchar('\n');
}
