#include<stdio.h>

int main(){
    int a, b, c;
    printf("Enter the values of a, b, and c: \n");
    scanf("%d %d %d", &a, &b, &c);
    printf("Avarage is:%d\n",(a+b+c)/3);

    if(a > b && a > c)        
      {
         printf("A is Maximum");          
      }
       else if(b > a && b > c)        
        {
          printf("B is Maximum"); 
         }
             else if(c > b && c > a);        
              {
                printf("C is Maximum");              
              }
              else 
              {
               printf("Valus are equal for maxmimum");
              }       
             
                 if(a < b && a < c)
                  {
                         printf("A is Minimum");
                   }
                    else if(b < a && b < c)
                    {
                      printf("B is Minimum");
                    }
                      else if(c < b && c < a)
                      {
                        printf("C is Minimum");
                      }
                         else
                            printf("Valus are equal");
                        

    return 0;
}