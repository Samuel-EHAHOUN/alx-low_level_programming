#include "main.h"

/**
 * _puts_recursion - Entry point
 *
 * Description: 'the program's description'
 *
 * @s: euhhh
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_putchar(s + 1);
	}
}
