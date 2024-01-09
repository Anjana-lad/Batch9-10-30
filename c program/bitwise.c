//bitwise op:&,|,^,~  -(n+1)
// a b exor
// 0 0  0
// 1 1 0
// 1 0 1
// 0 1 1
#include<stdio.h>
int main(){
    int num1=24,num2=10,sum,res;
    sum=(num1>num2) ^(num2<=10);
    printf("result is:%d",sum);
    res=~num1;
    printf("The result is:%d",res);
}