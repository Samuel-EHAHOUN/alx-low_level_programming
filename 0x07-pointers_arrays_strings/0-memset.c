#include "main.h"

/**
 * _memset - euhhh
 *
 * @s: rrr
 *
 * @b: ttt
 *
 * @n: yyy
 *
 * Return: a char *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
