#include "main.h"

/**
 * print_numbers - print
 * only using _putchar twice
 *
 * Return: return results
*/
void print_numbers(void)
{
	int num = 0;

	do {
		putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	putchar('\n');
}
