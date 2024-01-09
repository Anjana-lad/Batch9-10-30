
#include<stdio.h>
int main(){
int age;
char ch;
printf("Enter your choice: male or female:");
scanf("%c",&ch);
printf("Enter age:");
scanf("%d",&age);
 if(ch=='m' || ch=='M'){
    if(age>=21){
        printf("Eligible for marriage");
    }
    else{
        printf("not possible");
    }
 }
 if(ch=='f' || ch=='F'){
    if(age>=18){
        printf("Eligible for marriage");
    }
    else{
        printf("not possible");
    }
 }

}