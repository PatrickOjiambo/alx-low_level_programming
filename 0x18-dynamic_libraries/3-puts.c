#include "main.h"

/**
 * _puts - check description
 * @str: pointer to char
 * Description: prints a string followed by a new line
 * Return: Nothing
 */
void _puts(char *str)
{
	char *p = str;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
