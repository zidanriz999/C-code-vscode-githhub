#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s", &s);

    int num[101];
    int c= 0,i,j,temp;
    
    for (i = 0; s[i] != '\0'; i++)
     {
        if (s[i] >= '0' && s[i] <= '9')
         { 
            num[c++] = s[i] - '0';
         }
    }

    for (i = 0; i < c - 1; i++) 
    {
        for (j = 0; j < c - i - 1; j++)
         {
            if (num[j] > num[j + 1])
             {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }


    for (i = 0; i < c; i++) 
    {
        printf("%d", num[i]);

        if (i < c - 1)
         {
            printf("+");
         }
    }

    return 0;
}
