#include<stdio.h>
extern int a=5;
int data(){
    a=a+5;
   printf("\n The value of a is:%d",a);
}
int main(){
   data();
   printf("\n a is:%d",a);
   a=a+2;
   printf("\n A:%d",a);
   data();
}