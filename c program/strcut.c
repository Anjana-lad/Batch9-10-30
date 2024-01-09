#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
}s1,s2;
int main(){
   printf("Enter rollno:");
   scanf("%d",&s1.rollno);
    printf("Enter name:");
   scanf("%s",&s1.name);
    printf("Enter marks:");
   scanf("%f",&s1.marks);
   printf("Enter rollno:");
   scanf("%d",&s2.rollno);
    printf("Enter name:");
   scanf("%s",&s2.name);
    printf("Enter marks:");
   scanf("%f",&s2.marks);
   printf("\n The Student one details are:");
   printf("\n Rollno is:%d",s1.rollno);
    printf("\n Name is:%s",s1.name);
     printf("\n marks is:%f",s1.marks);
     printf("\n The Student two  details are:");
   printf("\n Rollno is:%d",s2.rollno);
    printf("\n Name is:%s",s2.name);
     printf("\n marks is:%f",s2.marks);
}