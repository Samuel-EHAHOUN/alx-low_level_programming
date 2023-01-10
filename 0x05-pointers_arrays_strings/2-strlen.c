#include "main.h"

/**
 * _strlen - calculate the size of a string
 *
 * @s: the string
 *
 * Return: the size of int
 */

int _strlen(char *s)
{
	int size = 0;

	while(*(s + size) != '\0')
	{
		size++;
	}
	return (size - 1);
}
