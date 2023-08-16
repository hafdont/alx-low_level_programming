#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int hundreds_digit, tens_digit, ones_digit;

    for (hundreds_digit = 0; hundreds_digit <= 7; hundreds_digit++)
    {
        for (tens_digit = hundreds_digit + 1; tens_digit <= 8; tens_digit++)
        {
            for (ones_digit = tens_digit + 1; ones_digit <= 9; ones_digit++)
            {
                putchar(hundreds_digit + '0'); // Print hundreds digit
                putchar(tens_digit + '0');     // Print tens digit
                putchar(ones_digit + '0');     // Print ones digit

                if (hundreds_digit < 7 || tens_digit < 8 || ones_digit < 9)
                {
                    putchar(','); // Print comma
                    putchar(' '); // Print space
                }
            }
        }
    }
    putchar('\n'); // Print newline

    return (0);
}

