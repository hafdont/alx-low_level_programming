#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
 * main - Entry point
 *
 * Description: Find outs whether a  number  is positive or negative
 * Return: Always 0 (Succes)
 */
int main(void)
{

	int random_number;

	srand(time(0));
	random_number = rand() - RAND_MAX / 2;

	if (random_number > 0)
		printf("%d is positive\n", random_number);
	else if (random_number == 0)
		printf("%d is zero\n", random_number);
	else
		printf("%d is negative\n", random_number);
	return (0);
}
