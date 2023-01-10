#include "main.h"

/**
 * rev_string - reverse a string
 *
 * @s: the string
 */

void rev_string(char *s)
{
	int i;
	char tmp[1000];
	int size = 0;

	while (*(s + size) != '\0')
	{
		tmp[size] = *(s + size);
		size++;
	}
	tmp[size] = '\0';

	for (i = 0; i <= size; i++)
		*(s + i) = tmp[i];
}
