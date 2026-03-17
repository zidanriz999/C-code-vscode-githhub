#include<stdio.h>
int main(){
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);

    printf("Enter the value of y: ");
    scanf("%d",&y);

    if(x > y)
    {
        printf("X is greater than Y\n");
    }
    else if (x < y)
    {
        printf("X is less than Y\n");
    }
  
return 0;
}