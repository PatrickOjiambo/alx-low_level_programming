#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main -Prints whether the value of n is postive, negative or equal to zero
 *Description: Assigns a random number to the variable n and prints if it's
 *positive, negative, or zero
 *Return: Always 0 (Success)
 */
int main(void)
	{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
	}
