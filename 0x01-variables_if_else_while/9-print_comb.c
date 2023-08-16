#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num;

    for (num = 0; num <= 9; num++)
    {
        putchar(num + '0'); // Print the current digit
        if (num < 9)
        {
            putchar(','); // Print comma
            putchar(' '); // Print space
        }
    }
    putchar('\n'); // Print newline

    return (0);
}

