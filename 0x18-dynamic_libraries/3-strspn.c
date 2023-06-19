#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: pointer to char
 * @accept: pointer to char
 * Description: gets len in bytes of s segments made of accept bytes
 * Return: the nmber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
