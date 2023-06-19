#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: integer c
 * Description: uses _putchar to check if c is an integer
 * Return: 1 if c is integer and 0 if c is not
 */
int _isdigit(int c)
{
	char i;
	int a = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			a = 1;
	}
	return (a);
}
