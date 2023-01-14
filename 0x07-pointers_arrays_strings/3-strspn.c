#include "main.h"

/**
 * _strspn - euhh
 *
 * @s: hnn
 *
 * @accept: huuu
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int n = 0, tmp, i, j, d = 0;

	int size1 = 0, size2 = 0;

	while (s[size1] != '\0')
		size1++;
	while (accept[size2] != '\0')
		size2++;

	for (i = 0; i < size1; i++)
	{
		tmp = n;
		for (j = 0; j < size2; j++)
		{
			if (s[i] == accept[j])
				n += 1;
		}
		if (n == tmp)
			n = 0;
		if (n > d)
			d = n;
	}
	return (d);
}
