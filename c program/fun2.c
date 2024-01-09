#include<stdio.h>
int subtact(int a,int b){ //function defination   
    return a-b;
}
int main()
{
    int a,b;
   printf("Enter a and b:");
   scanf("%d %d",&a,&b);
 printf("The res is:%d",subtact(a,b));
}