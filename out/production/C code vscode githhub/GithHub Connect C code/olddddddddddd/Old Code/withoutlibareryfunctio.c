#include<stdio.h>
int main(){
 char s1[]="abc";
 char s2[]="123";
 char s3[10];
 int i,j;
 for(i=0;s1[i]!='\0';i++){
    s3[i]=s1[i];
 }
 for(j=0;s2[j]!='\0';j++){
    s3[i]=s2[j];
    i++;
 }
 s3[i]='\0';
 printf("%s\n\n",s3);


}