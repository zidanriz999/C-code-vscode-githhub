#include<stdio.h>
int main(){
    int i,mini,max,a[8]={2,-3,-4,0,9,5,7,2};
    mini=a[0];
    max=a[0];

    for(i=0;i<8;i++)
   {
       if(a[i]<mini)
        {
            mini=a[i];
        }
       if(a[i]>max)
        {
            max=a[i];
        }
    }

     printf("Minimum Value:%d\n",mini);
     printf("Maximum Value:%d\n",max);

 return 0;
}

