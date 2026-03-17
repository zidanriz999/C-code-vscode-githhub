#include<stdio.h>
int main(){
 int a,b,c,i;
 a=0;
 b=1;
 printf("%d\n%d\n",a,b);
 for(i=1;i<=13;i++){
    c=a+b;

    printf("%d\n",c);
     a=b;
     b=c;
 }


 return 0;
}
