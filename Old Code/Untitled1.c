#include<stdio.h>

int main(){
  int a, b, c;
  printf("Enter the the values of a, b, and c: \n");
  printf("Avarag is:%d",(x+y+z)/3);
  scanf("%d %d %d", &a, &b, &c);

        if(a > b && a > c)
          {
           printf("A is Maximum\n");
          }
       else if(b > a && b>c)
          {
              printf("B is Maximum\n");
          }
       else if(c > b && c >a)
             {
               printf("C is Mamimum\n");
             }
       else
             {
              printf("Nothinng to Work\n");
             }

    return 0;
}
