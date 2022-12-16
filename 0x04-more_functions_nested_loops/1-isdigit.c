/**
 * _isdigit - Entry point
 *
 * Description: Check if c is lowercase
 *
 * @c: is the character to test
 *
 * Return: 1 if it's lowercase and 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
