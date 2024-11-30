#include<stdio.h>
int main (){
 int i,num,c=0;
 printf("Enter a number:\n");
 scanf("%d",&num);
 
 for(i=2;i<num;i++){
    if(num%i==0)
    c++;
    
 }
 if(c==0)
 {
    printf("%d is a prime number",num);
 }
 else
 {
    printf("Not Prime number\n");
 }
 

 return 0;
}
