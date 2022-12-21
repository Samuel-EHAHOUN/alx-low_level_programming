#include "main.h"

/**
 * _strlen - check the code
 *
 * @s: a pointer
 *
 * Return: the lenght
 *
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}
