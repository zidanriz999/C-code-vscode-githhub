#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the values of a, b, and c: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Avarage is:%d\n",(a+b+c)/3);

    if(a > b && a > c)       
    printf("\nA is Maximum");          
    else if(b > a && b > c)        
    printf("\nB is Maximum"); 
    else if(c > b && c > a)        
    printf("\nC is Maximum");              
    else
    printf("Valus are equal for maxmimum");
    if(a < b && a < c)
    printf("\nA is Minimum");
    else if(b < a && b < c)
    printf("\nB is Minimum");
    else if(c < b && c < a)
    printf("\nC is Minimum");
    else
    printf("Valus are equal for minimum");
    
    return 0;
}