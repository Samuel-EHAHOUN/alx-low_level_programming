#include "main.h"

/**
 * _strcpy - check the code
 *
 * @dest: the pointer
 *
 * @src: size
 *
 * Return: a char
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
