#include<ctype.h>
#include "main.h"
/**
 *_isalpha - returns 1 if c is alphabet
 *else it returns 0
 *@c: the character to check
 *Return: always 0(Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
