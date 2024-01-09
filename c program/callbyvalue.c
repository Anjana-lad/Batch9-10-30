#include<stdio.h>
int value(int *num){
    printf("Before adding value:%d",*num);
    *num=*num+10;
    printf("\n After adding value:%d",*num);
}
int main(){
    int num;
    printf("Enter any num:");
    scanf("%d",&num);
    value(&num);
    printf("\n After calling function:%d",num);
}