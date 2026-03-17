#include<stdio.h>
int main (){
    int a[8]={70,80,81,5,10,12,14,16};
    int odd,even,i,c=0;
    for(i=0;i<=7;i++){
        if(a[i]%2==1)
        {
            printf("\n\nEven Numbers:");
            
            printf("%d",a[i]);
        }
        if(a[i]%2==0)
        {
            printf("\n\nOdd Numbers:");
            
            printf("%d",a[i]);

        }
         

        
    }


}