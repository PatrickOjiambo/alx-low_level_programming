#include "main.h"

/**
 * _memset - fill memory with constant byte
 * @s: pointer to char
 * @b: character
 * @n: integer
 * Description: fills fist n bytes of memory pointed by s with constant byte b
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;
	return (s);
}
