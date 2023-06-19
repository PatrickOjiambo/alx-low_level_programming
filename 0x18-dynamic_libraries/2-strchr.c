#include "main.h"

/**
 * _strchr - locates character in string
 * @s: pointer to character
 * @c: character
 * Description: returns pointer to fist occurence of c in string s
 * Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return ((void *)0);
}

