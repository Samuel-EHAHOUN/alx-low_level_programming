#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;
	if (digit < 0)
		digit = -digit;

	if ((digit > 0) && (digit < 6))
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	if (digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	if (digit == 0)
		printf("%d is 0 and is 0\n", n);
	return (0);
}
