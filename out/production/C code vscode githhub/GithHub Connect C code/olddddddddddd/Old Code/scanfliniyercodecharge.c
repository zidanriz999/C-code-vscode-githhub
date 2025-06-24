#include<stdio.h>
int main(){

 int a[5],c,i,j,b[4]={2,50,-1,12};
 for(i=0;i,5;i++){
    scanf("%d",a[i]);
 }
 for(i=0;i<4;i++){
    c=0;
    for(j=0;j<5;j++){
        if(a[j]==b[i])
        {
            printf("%d is found in index %d",b[i],j);
            c++;
        }
    }

 }
 if(c==0)
 {
    printf("%d is not found\n",b[i]);

 }
    return 0;
}