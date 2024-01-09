#include<stdio.h>
int main(){
    int num1;
    printf("Enter the num1");
    scanf("%d",&num1);
    int i=1;
    do
    {
        printf("%d * %d = %d \n",num1,i,num1*i);
        i++;
    }while(i<=10);
}