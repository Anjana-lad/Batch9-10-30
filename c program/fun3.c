#include<stdio.h>
#define pi 3.14 //global variable
int area(int r){
   int res=pi*r*r;
   printf("The area is:%d",res);
}
int main(){
    int a;//local variable
    printf("Enter value");
    scanf("%d",&a);
    area(a);//function call


}