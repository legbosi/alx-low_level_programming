#include <stdlid.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
		printf("%d is %s\n", n, "negative");
	}
	else
	{
		pintf("%d is %s\n", n, "zero");
	}
	return (0);
}
