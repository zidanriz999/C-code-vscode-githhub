#include<stdio.h>
int main()
{
    int i,max,a[5]={5,6,7,-2,0};
     max=a[0];
     for(i=1;i<=5;i++)
     {
         if(a[i]>max)
         {
             max=a[i];
         }
     }
      printf("%d",max);

}
