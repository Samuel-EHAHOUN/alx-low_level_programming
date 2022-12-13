#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Description: Check if n is lowercase
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			if (hours < 10)
			{
				if (minutes < 10)
				{
					_putchar('0');
					_putchar(hours + '0');
					_putchar(':');
					_putchar('0');
					_putchar(minutes + '0');
				}
				else
				{
					_putchar('0');
					_putchar(hours + '0');
					_putchar(':');
					_putchar(minutes + '0');
				}
			}
			else
			{
				if (minutes < 10)
				{
					_putchar(hours + '0');
					_putchar(':');
					_putchar('0');
					_putchar(minutes + '0');
				}
				else
				{
					_putchar(hours + '0');
					_putchar(':');
					_putchar(minutes + '0');
				}
			}
			_putchar('\n');
		}
	}

}
