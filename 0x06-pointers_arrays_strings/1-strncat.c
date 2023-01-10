#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: euhhh
 *
 * Return: return a char *
 */

char *_strncat(char *dest, char *src, int n)
{
	int size1, size2, i;

	size1 = size2 = i = 0;
	while (*(dest + size1) != '\0')
	{
		size1++;
	}
	while (*(src + size2) != '\0')
	{
		size2++;
	}
	if (n == size2)
	{
		for (i = 0; i <= size2; i++)
			*(dest + size1 + i) = *(src + i);
	}
	else if (n > size2)
	{
		for (i = 0; i < size2; i++)
			*(dest + size1 + i) = *(src + i);
		*(dest + size1 + size2) = '\0';
	}
	else
	{
		for (i = 0; i <= n; i++)
			*(dest + size1 + i) = *(src + i);
		*(dest + size1 + n + 1) = '\0';
	}
	return (dest);
}
