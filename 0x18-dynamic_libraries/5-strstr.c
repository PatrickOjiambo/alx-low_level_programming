#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to char
 * @needle: pointer to char
 * Description: finds firsst occurence of needle in haystack
 * Return: pointer to the beginning of the substring of NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		for (j = i, k = 0; needle[k] && haystack[j] == needle[k]; j++, k++)
			;
		if (needle[k] == '\0')
			return (&haystack[i]);
	}
	return ((void *)0);
}
