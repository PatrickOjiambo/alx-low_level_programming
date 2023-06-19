#include "main.h"
/**
 * _memcpy - check description
 * @dest: pointer to char (destination_file)
 * @src: pointer to char (source file)
 * @n: number of bytes to be copied
 * Description: copies n bytes from memory area src to dest.
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
