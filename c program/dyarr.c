#include<stdio.h>
int main(){
  int i,arr1[10];
  printf("Enter the value of array:");
  for(i=0;i<10;i++){
    scanf("%d",&arr1[i]);
  }
  for(i=0;i<10;i++){
    printf("\n the values are:arr1[%d] =%d",i,arr1[i]);
  }
}