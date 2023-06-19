#include "main.h"

/**
 * _strcpy - check description
 * @dest: pointer to a char
 * @src: pointer to a char
 * Description: copies string to a buffer
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
		*dest++ = *src++;
	return (p);
}
