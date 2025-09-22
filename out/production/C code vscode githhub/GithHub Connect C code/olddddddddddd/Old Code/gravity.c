#include <stdio.h>

int main() {
    int n, i, j, cube[100],temp;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &cube[i]);
    }

    for(i = 0; i < n-1; i++) 
    {
        for(j = i+1; j < n; j++) 
        {
            if(cube[i] > cube[j])
            {
                temp = cube[i];
                cube[i] = cube[j];
                cube[j] = temp;
            }
        }
    }
    
    for(i = 0; i < n; i++) 
    {
        printf("%d ", cube[i]);
    }

    return 0;
}
