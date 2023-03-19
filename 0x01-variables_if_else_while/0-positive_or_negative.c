#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Positive anything is better than negative nothing'
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive n", 0);
	}
	else if (n == 0)
	{
		printf("%d is zero n", 0);
	}
	else
	{
		printf("%d is negative n", 0);
	}
	return (0);
}
