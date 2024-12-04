#include<stdio.h>
int main(){
    int i,min,mix,a[8]={2,-3,-4,0,9,5,7,2};
    min=a[0];
    mix=a[0];

    for(i=0;i<=7;i++)
   {
       if(a[i]>mini)
        {
            mini=a[i];
        }
       if(a[i]<max)
        {
            max=a[i];
        }
    }

     printf("%d\n,max");
     printf("%d\n,min");

 return 0;
}
