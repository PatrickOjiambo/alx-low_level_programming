#include "main.h"

/**
 * _strncat - check description
 * @n: integer value of characters to be appended
 * @src: character pointer
 * @dest: character pointer
 * Description: concatinates two strings
 * Return: character pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	char *start = src;
	int i = 0;
	int src_len = 0;

	while (*src)
	{
		src_len++;
		src++;
	}
	while (*dest)
		dest++;

	if (n > src_len)
		n = src_len;

	src = start;

	for (; i < n && i < src_len; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}

