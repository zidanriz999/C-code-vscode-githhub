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
   
  printf("All Students info:\n");
  printf("%d %s\n", s1.roll, s1.name);
  printf("%d %s\n", s2.roll, s2.name);
  printf("%d %s\n", s3.roll, s3.name);
  printf("%d %s\n", s4.roll, s4.city);


    return 0;

}


#include<stdio.h>
 struct student{
    int studentID;
    char name[100];
    char bloodGroup[100];
    char DOB [11];
 };
 int main(){
    struct student s1={100,"Akash","A+","20"};
    struct student s2={200,"Nur","B+","05"};
    struct student s3={305,"Majid","B-","11"};

   
  printf("Information of three Students info:\n");
  
 printf("%d %s %s %s \n", s1.studentID, s1.name,s1.bloodGroup,s1.DOB);
 printf("%d %s %s %s \n", s2.studentID, s2.name,s2.bloodGroup,s2.DOB);
 printf("%d %s %s %s \n\n", s3.studentID, s3.name,s3.bloodGroup,s3.DOB);


    return 0;

}

