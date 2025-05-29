#include<stdio.h>
int main(){
 int a,b,c,i,n;
  printf("Enter the valu of Fibonacci number:");
  scanf("%d",&n);
   a=0;
   b=1;

  printf("%d\n%d\n",a,b);

 for(i=1;i<=n;i++){
    c=a+b;

    printf("%d\n",c);
     a=b;
     b=c;
 }


  return 0;
}

/*
#include<stdio.h>
int main(){
 int a,b,c,i,n;
  printf("Enter the valu of Fibonacci number:");
  scanf("%d",&n);
   a=0;
   b=1;

  printf("%d\n%d\n",a,b);

 for(i=1;i<=n-2;i++){
    c=a+b;

    printf("%d\n",c);
     a=b;
     b=c;
 }


  return 0;
}

*/

/*
#include <stdio.h>

int main() {
   
    int  odd = 0, even = 0,i,a[8]={70,81,5,9,12,14,16,1};
      for(i=0;i<=7;i++)
      {
        if (a[i]%2==0){
            even++;
        }  
         if (a[i]%2==1){
            odd++;
      }
      }

    printf("Odd digits are occurred %d times.\n", odd);
    printf("Even digits are occurred %d times.\n", even);

    return 0;
}


*/