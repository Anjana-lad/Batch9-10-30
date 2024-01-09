#include<stdio.h>
int print(){
    register i=0;
    i++;
    return i;
}
int main(){
   printf("The value of i is:%d",print());
}