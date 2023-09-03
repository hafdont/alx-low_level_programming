#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }


    int cents = atoi(arg[i]);
    if (cents < 0)
        {
            printf("0\n");
	    
	    return(0);
	}
    int coins[] = {25, 10, 5, 2, 1};
    int num_coins = sizeof(coins) / sizeof(coins[0]);
    int min_coins = 0;
    
    for (i = 0; i < num_coins; i++)
            {
                int temp_min_coins = cents / coins[i];
                if (temp_min_coins < cents)
                {
                    cents = temp_min_coins;
                }
            }
            printf("%d\n", cents);
        }
    }
    return (0);
}
