/**
 * _isalpha - Entry point
 *
 * Description: Check if c is lowercase
 *
 * @c: is the character to test
 *
 * Return: 1 if it's lowercase and 0 otherwise
 */

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	else
		return (0);
}
