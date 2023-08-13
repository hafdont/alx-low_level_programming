#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Assigns a random number to the variable n
 * and prints whether its a postive,negative orzero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) == 0)
		printf("The last digit of %d is %d and its in 0\n", n, n % 10);
	else if ((n % 10) > 5)
		printf("The last digit of %d is %d and its greater than 5\n", n, n % 10);
	else
		printf("The last digit of %d is %d and it les than 6 and not 0\n", n, n % 10);

	return (0);
}
