#include "main.h"

/**
 * _memcpy - euhh
 *
 * @src: addd
 *
 * @dest: pddd
 *
 * @n: qddd
 *
 * Return: a char *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
