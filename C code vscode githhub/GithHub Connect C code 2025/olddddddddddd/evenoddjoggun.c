#include<stdio.h>
int main(){
    int i,sum = 0,riz=1;
    int Even_sum = 0,Even_riz=1;
    
    printf("ODD Number:\n");
    for(i=1;i<=10;i=i+2)
    {
    
    {
        printf("%d\t",i);
    }
    sum=sum+i;
    riz=riz*i;
    }
    printf("\nSummation:%d",sum);
    printf("\nMultiplation:%d\n",riz);

   
    printf("\nEven Number:\n");
    for(i=2;i<=10;i=i+2)
    {
    {
        printf("%d\t",i);
    }
     Even_sum = Even_sum+i;
     Even_riz = Even_riz*i;
    
    
    }
    printf("\nSummation:%d",Even_sum);
    printf("\nMultiplation:%d\n",Even_riz);
 


    return 0;
}