#include<stdio.h>
int main(){
    int num=12;
    int *p;
    p=&num;//referencing pointer;
    printf("The value of number is:%d and address of number is:%d",num,p);
    num=*p;//dereferencing pointer;
    printf("\n THe value is:%d",*p);
}
