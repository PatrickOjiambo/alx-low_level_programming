#include "main.h"
/**
 * _strpbrk - locates first occurrence
 * @s: pointer to char
 * @accept: pointer to char
 * Description: finds first occurencein string s of bytes in accept
 * Return: pointer to byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*p == *s)
				return (s);
			p++;
		}
		s++;
	}
	return ((void *)0);
}
