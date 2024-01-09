#include<stdio.h>
int main(){
  int i,arr1[10],sum=0;
  printf("Enter the value of array:");
  for(i=0;i<10;i++){
    scanf("%d",&arr1[i]);
  }
  for(i=0;i<10;i++){
    sum=sum+arr1[i];
    printf("\n the values are:arr1[%d] =%d",i,arr1[i]);
  }                                                                                              
     printf("\n The summation is:%d",sum);
}