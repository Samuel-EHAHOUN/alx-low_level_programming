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
	char tmp[10000];
	int j = 0;

	while (s[i] != '\0')
	{
		tmp[i] = s[i];
		i++;
	}
	i--;
	while (i >= 0)
	{
		s[j] = tmp[i];
		j++;
		i--;
	}
	s[j++] = '\0';
	_putchar('\n');
}
