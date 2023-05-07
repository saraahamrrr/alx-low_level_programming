#include <stdlib.h>
#include <time.h>
#include <stdio.h>
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

	digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (digit > 5)
	{
		printf("and is greater than 5\n");
	} else if (digit == 0)
	{
		printf("and is 0\n");
	} else if (digit < 6 && digit != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
