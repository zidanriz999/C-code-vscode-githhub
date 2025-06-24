#include<stdio.h>

int main(){
    int a, b, c;

    printf("Enter the values of a, b, and c: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Average is:%d\n",(a+b+c)/3);  

    if(a > b && a > c) {
        printf("A is Maximum\n");
    } 
    else if(b > a && b > c) {
        printf("B is Maximum\n");
    } 
    else if(c > a && c > b) {
        printf("C is Maximum\n");     } 
    else {
        printf("Values are equal for maximum\n");
    }


    
    if(a < b && a < c) {
        printf("A is Minimum\n");
    } 
    else if(b < a && b < c) {
        printf("B is Minimum\n");
    } 
    else if(c < a && c <b) {
        printf("C is Minimum\n");     } 
    else {
        printf("Values are equal for minimum\n");
    }


    return 0;
}
