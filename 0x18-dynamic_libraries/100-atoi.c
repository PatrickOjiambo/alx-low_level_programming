#include "main.h"

/**
 * _atoi - check description
 * @s: pointer to char
 * Description: converts string to integer
 * Return: int value and zero if null
 */

int _atoi(char *s)
{
	unsigned int result = 0;
	int sign = 1;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			result = result * 10 + *s - '0';
		}
		else if (null_flag)
			break;
		s++;
	}
	if (sign < 0)
		result = (-result);
	return (result);
}
