#include<stdio.h>
int main (){
 int a[5]={-1,2,5,9,12};
 int i,c=0,num=9,n=5;
 for(i=0;i,i<=5;i++){
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

 return 0;

}