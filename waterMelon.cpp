#include <iostream>

int main() {
    
    int w;
    
   std::cin>>w;
   
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