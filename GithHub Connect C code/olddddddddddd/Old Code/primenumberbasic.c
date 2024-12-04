#include<stdio.h>
int main (){
 int num=27;
 int i;
 int flag=0;
 for(i=2;i<num;i++){
    if(num%i==0)
    {
        flag=1;
        break;
    }
 }
 if(flag==0)
 {
    printf("%d is prime number",num);

 }
 if(flag==1)
 {
    printf("%d is not prime number",num);
 }


    return 0;
}