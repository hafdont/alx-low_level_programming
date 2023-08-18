#include <stdio.h>

/** 
 * main - Entry point 
 *
 * Description: a program that prints out 1- 100 
 * but prints fizz onmultiples of 3 
 * and buzz on multipples of 5 
 *
 * Return; Always 0 (Success)
 */

int main(void)
{
	for (int i = 1; <= 100; i++) {
		if (i % 3 == 0 & i % 5 == 0) {
			printf("FizzBuzz");
			else if (i % 3 == 0) {
				printf("Fizz");
				else if (i % 5 == 0) {
					printf("Buzz");
					else {
						printf("%d", i);
					}
				}
				printf("\n");

				return 0:
			}
