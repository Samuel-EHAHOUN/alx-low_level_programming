#include "main.h"

/**
 * _strcmp - comparaison
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, cmp = 0;

	while (1)
	{
		if (s1[i] == '\0')
		{
			cmp = s2[i];
			break;
		}
		if(s2[i] == '\0')
		{
		       cmp = s1[i];
		       break;
		}
		if (s1[i] != s2[i])
		{		
			cmp = s1[i] - s2[i];
			break;
		}
	}
	return (cmp);
}
