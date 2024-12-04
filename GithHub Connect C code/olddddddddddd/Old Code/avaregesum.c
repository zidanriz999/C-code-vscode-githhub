#include<stdio.h>
int main(){
 int i,sum=0,c=0;
 float avg;
 printf("Enter the even numbers:\n");
 for(i=10;i<=30;i++){
    if(i%2==0)
    {
        printf("%d\n",i);
        sum=sum+i;
        c++;
    }
 }
   avg=sum/c;
   printf("Avarege:%f\n",avg);
   printf("Summation:%d\n",sum);


    return 0;
}