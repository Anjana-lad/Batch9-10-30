#include<stdio.h>
//int print(){
//     printf("Hello world");
// }
// int sum(){ //function defination
//     int a,b;
//     printf("Enter values:");
//     scanf("%d %d",&a,&b);
//     return a+b;
// }
int multiply(int a, int b);//function declaration
int main(){
    int a,b;
    print();
    //sum();//function call
    printf("Enter values:");
   scanf("%d %d",&a,&b);
    multiply(a,b);
   // printf("sum is:%d",sum());
}
int multiply(int a, int b){
    int res=a*b;
    printf("The product is:%d",res);
}


