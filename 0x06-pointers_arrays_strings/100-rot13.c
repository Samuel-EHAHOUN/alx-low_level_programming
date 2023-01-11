#include "main.h"

/**
 * rot13 - leet speak
 *
 * @str: the string
 *
 * Return: a char *
 */

char *rot13(char *str)
{
	int i = 0, j = 0;
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char corresp[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters[j])
				str[i] = corresp[j];
		}
		i++;
	}
	return (str);
}
