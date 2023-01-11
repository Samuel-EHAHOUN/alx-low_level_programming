#include "main.h"

/**
 * string_toupper - euhh
 *
 * @str: a string
 *
 * Return: a char *
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] <= 122 && 97 <= str[i])
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
