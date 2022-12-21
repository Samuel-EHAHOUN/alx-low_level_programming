#include "main.h"

/**
 * rev_string - check the code
 *
 * @s: the pointer
 *
 */
void rev_string(char *s)
{
	int i = 0;
	char *tmp = s;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	j = i;
	while (i >= 0)
	{
		s[j - i] = tmp[i];
		i--;
	}
	_putchar('\n');
}
