#include "main.h"

/**
 * leet - leet speak
 *
 * @str: the string
 *
 * Return: a char *
 */

char *leet(char *str)
{
	int i = 0, j = 0;
	char letters[] = "aeotlAEOTL";
	char numbers[] = "4307143071";

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; i++)
		{
			if (str[i] == letters[j])
				str[i] = numbers[j];
		}
		i++;
	}
	return (str);
}
