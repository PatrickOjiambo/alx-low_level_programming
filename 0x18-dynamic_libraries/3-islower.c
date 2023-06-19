#include "main.h"
/**
 * _islower - Checks if char is lowercase
 *@c: takes one argument of integer type
 * Description: function takes one argument int c and uses _putchar
 * Return: 1 if c is lower and 0 otherwise
 */

int _islower(int c)
{
	char j;
	int i = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (c == j)
			i = 1;
	}
	return (i);
}
