#include "main.h"

/**
 * puts_half - check the code
 *
 * @str: the pointer
 *
 */
void puts_half(char *str)
{
	int i,j;

	i = j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = (i / 2; j <= i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
