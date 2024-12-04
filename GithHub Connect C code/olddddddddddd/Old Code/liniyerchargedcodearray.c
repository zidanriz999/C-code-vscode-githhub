#include<stdio.h>
int main (){
    int a[7]={-1,5,12,50,9,11,2};
    int c=0,i,num=100,n=7;
    for(i=0;i<=7;i++){
        if(a[i]==num)

     {
       printf("%d is found in index %d",num,i);
          c=1;
                   
     }
     

    }
      if(c==0)
      {
         printf("Not Found\n");
      }




}