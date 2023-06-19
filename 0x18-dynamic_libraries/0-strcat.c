#include "main.h"

/**
 * _strcat - check description
 * @src: character pointer
 * @dest: character pointer
 * Description: concatinates two strings
 * Return: character pointer
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}

