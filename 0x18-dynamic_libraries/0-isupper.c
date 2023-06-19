#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: integer c
 * Description: takes one arguments and uses _putchar to print
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	char i;
	int a = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			a = 1;
	}
	return (a);
}
