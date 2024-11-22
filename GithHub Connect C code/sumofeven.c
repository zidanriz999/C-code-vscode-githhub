#include<stdio.h>
int main(){
 int i,sum=0;
 printf("Enter the even numbers:\n");
 for(i=10;i<=30;i++){
    if(i%2==0)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
 }
   printf("Summation:%d\n",sum);


    return 0;
}