#include<stdio.h>
int main (){
    
    int w;
    
    //printf("Enter the value:");
    scanf("%d",&w);
    
    //if(w%2==0 && w>2)
    if(w>=4 && w<=100 && w%2==0)
           
     {
         printf("YES\n");
     } 
    else
    {
         printf("NO\n");
    }      
    
    return 0;
}