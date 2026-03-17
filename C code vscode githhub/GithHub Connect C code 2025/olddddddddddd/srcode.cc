#include<stdio.h>
int main(){
    int a=25,b=15;
    {
        printf("%d\n",a&&b);
        printf("%d\n",a||b);
        printf("%d\n",a);
        printf("%d\n",!a);
        printf("%d\n",a+1);
        printf("%d\n\n",b-1);
      
    }
     for(a=25;a<=50;a++)
    {
      printf("%d\t ",a);
    }
 for(b=15;b>=5;b--)
   {
     printf("\n%d\t ",b);
   }     


}