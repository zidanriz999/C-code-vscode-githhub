#include<stdio.h>
int main (){
    int a[7]={-1,5,12,5,9,11,2};
    int count=0,i;
    for(i=0;i<=6;i++){
        if(a[i]==50)

     {
       printf("%d",i);
        count++;          
     }
     

    }
    if(count==0)
     {
        printf("Not Found\n");
     }




}