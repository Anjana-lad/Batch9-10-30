//7!=7*6*5*4*3*2*1
#include<stdio.h>
int main(){
    int num,fact=1;
    printf("Enter number:");
    scanf("%d",&num);
    while(num>=1){
        fact=fact*num;
      num--;
    }
    printf("the factorial of given number is:%d",fact);
}
//1,1,2,3,5,8,13,21,

