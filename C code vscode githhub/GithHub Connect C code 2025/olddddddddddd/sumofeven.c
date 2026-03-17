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



#include <stdio.h>

int main() {
    int sum = 0, c = 0;
    float avg;
    for (int i = 2; i <= 31; i++) {
        if (i % 2 == 1) {
            printf("%d\t",i);
            sum =sum + i;
            c++;
        }
       
    }
    avg=sum/c;
     printf ("\nCount %d",c);
    printf ("\nSummation %d",sum);
    printf("\nAverage of even numbers between 10 and 25 is: %.2f\n", avg);
    return 0;
}
