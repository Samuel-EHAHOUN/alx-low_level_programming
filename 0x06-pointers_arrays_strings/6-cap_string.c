



/**
 * cap_string - euuh
 *
 * @str: a string
 *
 * Return: a char *
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i + 1] != '\0')
	{
		if ((str[i] <= 122 && 97 <= str[i]) && (str[i + 1] < 97 && 122 < str[i + 1]))
			str[i] -= 32;
		i++;
	}
}
