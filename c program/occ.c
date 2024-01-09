#include<stdio.h>
int main(){
  int i,arr1[10],positive=0,negative=0,zero=0;
  printf("Enter the value of array:");
  for(i=0;i<10;i++){
    scanf("%d",&arr1[i]);
  }
  for(i=0;i<10;i++){
   printf("\n the values are:arr1[%d] =%d",i,arr1[i]);
   if(arr1[i]<0){ 
        negative++;
   }
   else if(arr1[i]>0){
    positive++;
    }
    else{
        zero++;
  }
}
  printf("Accessing the array element at 6th position:%d",arr1[6]);
  printf("\n To show given value either postive,negative or zero:");
  printf("\n The postive values are:%d",positive);
  printf("\n The negative  values are:%d",negative);
  printf("\n The zero values are:%d",zero);
}