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
	int num = 0;
	char ch = 'a';

	while (num <= 102)
	{
		putchar(num + '0');
		if (num == 57)
		{
			num += 39;
		}
		num++;
	}

	putchar('\n');

	return (0);
}
