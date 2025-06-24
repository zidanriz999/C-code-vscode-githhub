#include<stdio.h>
int main()
{
    int num,sum=0,rem,number;
     printf("Enter the number:");
     scanf("%d",&number);
        num=number;
       while(num!=0)
                {
                   rem=num%10;
                   sum=sum*10+rem;
                   num=num/10;
                }
                if(number==sum)
                    {
                     printf("Given number is a plaindrom");
                    }
               else
                    {
                        printf("Given number is not a plaindrom");
                    }
return 0;
}