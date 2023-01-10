#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * Return: return a char *
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i < size2; i++)
		*(dest + size1 + i) = *(src + i);
	*(dest + size1 + size2 - 2) = '\0';
	return (dest);
}
