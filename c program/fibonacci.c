//1,1,2,3,5,8,13,21... ==0+1=1,1+1=2,2+1=3,2|+3=5
#include<stdio.h>
int main(){
 int n1=0,n2=1,num1,temp=0,count;
 printf("Enter number/:");
 scanf("%d",&num1);
 printf("%d , %d ,",n1,n2);
 count=2;
 while(count<num1){
  temp=n1+n2;
  n1=n2;
  n2=temp;
  count++;
 printf(" %d, ",temp);
 }  
}