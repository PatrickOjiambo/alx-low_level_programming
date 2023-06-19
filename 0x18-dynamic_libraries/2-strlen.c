#include "main.h"

/**
 * _strlen - check description
 * @s: pointer to char
 * Description: calculates the length of string
 * Return: integer value
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	return (len);
}
