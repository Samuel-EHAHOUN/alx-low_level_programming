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
	char tmp[];
	int j = 0;

	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	while (tmp[i] != '\0')
	{
		s[j] = tmp[i];
		j++;
		i--;
	}
	_putchar('\n');
}
