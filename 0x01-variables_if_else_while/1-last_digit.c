#include <stdio.h>
#include <stdio.h>
#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = reand() - RAND_MAX / 2;

	if ((n % 10) == 0)
		printf("The final digit of %d is %d and it hold the value of 0\n", n, n % 10);
	else if ((n % 10) > 5)
		printf("The last digit of %d is %d and it is greater than %\n", n, n % 10);
	else
	     printf("The ending of %d is %d and it less than 6 and not 0\n", n, n % 10);
	return (0);
}
