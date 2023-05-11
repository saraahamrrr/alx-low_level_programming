#include "main.h"

/**
 *  _strlen_recursion - Entry point
 *  Description: Returns the length of a string
 *  @s: Character
 *  Return: Length
 */

int  _strlen_recursion(char *s)
{
	int ntr = 0 ;

	if (*s > '\0')
	{
		ntr += 1 +  _strlen_recursion(s + 1);
	}
	return (ntr);
}
