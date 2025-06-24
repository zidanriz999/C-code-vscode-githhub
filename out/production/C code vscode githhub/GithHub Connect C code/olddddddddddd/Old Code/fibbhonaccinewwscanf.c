#include <stdio.h>
int main()
{
    int a, b, i, n;
    printf("Enter the valu of Fibonacci number:");
    scanf("%d", &n);
    a = -1;
    b = 1;
    printf("%d\n%d\n", a, b);

    for (i = 0; i <= n; i = a + b)
    {

        printf("%d\n", i);
        a = b;
        b = i;
    }

    return 0;
}
