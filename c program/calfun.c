#include<stdio.h>
int show(int a, char ch,int b,int res) {//a+b=res
    printf("The result is:%d %c %d=%d",a,ch,b,res);
}
int sum(int a, int b){
    int res=a+b;
    show(a,'+',b,res);
}
int sub(int a,int b){
    int res=a-b;
    show(a,'-',b,res);
}
int mul(int a,int b){
    int res=a*b;
    show(a,'*',b,res);
}
int div(int a,int b){
    int res=a/b;
    show(a,'/',b,res);
}
int main(){
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    int choice;
    printf("\n 1.Addition");
    printf("\n 2.Subtraction");
    printf("\n 3.multiplication");
    printf("\n 4.Division");
   printf("Enter choice:");
   scanf("%d",&choice);
   switch (choice)
   {
   case 1:
         sum(a,b);
    break;
   case 2:
         sub(a,b);
    break;
   case 3:
         mul(a,b);
    break;
   case 4:
         div(a,b);
    break; 
   default:
         printf("Invalid choice");
    break;
   }
}