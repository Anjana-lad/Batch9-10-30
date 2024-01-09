//arithemetic :+,-,/,*,%
#include<stdio.h>
int main(){
    int num1,num2,result;
    printf("Enter num1 and num2");
    scanf("%d %d",&num1,&num2);
    result=num1+num2;
    printf("\n the addition is:%d",result);
    result=num1-num2;
    printf("\n the subtraction is:%d",result);
    result=num1*num2;
    printf("\n the muliply is:%d",result);
    result=num1/num2;
    printf("\n the division is:%d",result);
    result=num1%num2; //remainder value
    printf("\n the result is:%d",result);
    
    
}