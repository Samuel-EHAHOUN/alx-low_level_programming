/**
 * _isupper - Entry point
 *
 * Description: Check if c is lowercase
 *
 * @c: is the character to test
 *
 * Return: 1 if it's lowercase and 0 otherwise
 */

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	else
		return (0);
}
