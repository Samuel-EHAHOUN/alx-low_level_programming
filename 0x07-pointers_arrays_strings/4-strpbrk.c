#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - eeeeeeee
 *
 * @s: a
 *
 * @accept: a
 *
 * Return: a char *
 */

char *_strpbrk(char *s, char *accept)
{
	int size1 = 0, size2 = 0, i, j;

	while (s[size1] != '\0')
		size1++;
	while (accept[size2] != '\0')
		size2++;
	for (i = 0; i < size1; i++)
	{
		for (j = 0; j < size2; j++)
		{
			if (s[i] == accept[j])
				return (s +i);
		}
	}
	return (NULL);
}
