#include "main.h"
/**
 * _isalpha - Checks if char is uppercase or lowercase
 *@c: takes one argument of integer type
 * Description: function takes one argument int c and uses _putchar
 * Return: 1 if c is a letter lowercase or upper  and 0 otherwise
 */

int _isalpha(int c)
{
	char j;
	int i = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (c == j)
			i = 1;
	}
	for (j = 'A'; j <= 'Z'; j++)
		if (c == j)
			i = 1;
	return (i);
}
