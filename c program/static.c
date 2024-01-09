#include<stdio.h>
int sum(){
   static int num=5;
   num=num+1;
   return num;
}
int main(){
   printf("The value is:%d",sum());
   printf("\n Number is:%d",sum());
}