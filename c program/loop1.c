#include<stdio.h>
int main(){
    int num1,sum=0;
    printf("Enter number:");
    scanf("%d",&num1);
    while(num1>0){
        int rem=num1%10;
         sum=sum+rem;
         num1=num1/10;
        printf("the sum of digit is:%d",sum);
    }
}