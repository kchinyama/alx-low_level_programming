#include <stdio.h>

/**
 *main - entry point
 * 
 * Return: 0 always
 */

int main(void)
{
	int k = 100;
	int i;

	i = 1;

	while (i <= k)
	{
	if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz ");
	}
	else if (i % 3 == 0)
	{
	printf("Fizz ");
	}
	else if (i % 5 == 0)
	{
	if (i < k)
	printf("Buzz ");
	else
	printf("Buzz");
	}
	else
	{
	printf("%i ", i);
	}
	i++;

	}
	printf("\n");

	return (0);
}
