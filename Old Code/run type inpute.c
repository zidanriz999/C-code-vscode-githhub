#include<stdio.h>
int main(){
    int x,y;
    printf("Enter value of x,y:\n");
    scanf("%d %d",&x, &y);

    if(x>y)
    {
      printf("X is larger");
    }
    else if(x<y)
     {
       printf("Y is larger");
     }
     else
     {
         printf("Valu is equial,Try again\n\n");
     }


}
