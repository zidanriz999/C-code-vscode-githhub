#include<stdio.h>
 struct student{
    int roll;
    char name[100];
    char city[100];
 };
 int main(){
    struct student s1={1,"Akash","jashore"};
    struct student s2={2,"Nur","Dhaka"};
    struct student s3={3,"Majid","Barisal"};
    struct student s4={4,"Anton","Rajshahi"};
 
  printf("%d %s\n", s1.roll, s1.name);
  printf("%d %s\n", s2.roll, s2.name);
  printf("%d %s\n", s3.roll, s3.name);
  printf("%d %s\n", s4.roll, s4.city);


    return 0;

}