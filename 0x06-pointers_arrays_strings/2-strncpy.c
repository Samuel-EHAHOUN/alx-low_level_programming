#include "main.h"

/**
 * _strncpy - euh
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: size
 *
 * Return: return a char *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	return (dest);
}
