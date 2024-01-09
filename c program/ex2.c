#include<stdio.h> 
void fun(int a){ 
    printf("Value of a is %d\n", a); 
} 
int main(){ 
    int (*ptr)(int)=&fun; 
      (*ptr)(150); 
  } 