#include<stdio.h>
int main (){
    int a[7]={-1,50,12,5,9,11,2};
    int c=0,i,num=50;
    for(i=0;i<=6;i++){
        if(a[i]==num)

     {
       printf("%d",i);
          c++;
                   
     }
     

    }
      if(c==0)
      {
         printf("Not Found\n");
      }




}