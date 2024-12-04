#include<stdio.h>
int main()
{
    int num,rem=0,mod,number;
     printf("Enter the number");
     scanf("%d",&number);
        num=number;
       while(num!=0)
                { 
                   mod=num%10;
                   rem=rem*10+mod;
                   num=num/10;
                }
                if(number==rem)
                    {
                     printf("Given number is a plaindrom");
                    }
               else
                    {
                        printf("Given number is not a plaindrom");
                    }
return 0;
}