#include <stdio.h>

int main() {
    int i,j,n,coins[100], total = 0,temp;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
        total = total + coins[i];
    }

    for (i = 0; i < n - 1; i++) 
   {
        for (j = i + 1; j < n; j++)
        
        {
            if (coins[i] < coins[j])
              {
                 temp = coins[i];
                 coins[i] = coins[j];
                 coins[j] = temp;
              }
        }
    }


    int my_sum = 0, count = 0;

    for (i = 0; i < n; i++)
    {
        my_sum = my_sum + coins[i];
        count++;

        if (my_sum > total - my_sum) 
        {
            break;
        }
    }


      printf("%d\n", count);

    return 0;
}
