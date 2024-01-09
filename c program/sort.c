#include<stdio.h>
int main(){
    int i, arr1[]={5,8,3,7,6},temp;
    for(i=0;i<5;i++){
        printf("%d \t",arr1[i]);
    }
    for(i=0;i<5;i++){
        for(int j=0;j<5;j++){
        if(arr1[i]<arr1[j]){
          temp=arr1[j];
          arr1[j]=arr1[i];
          arr1[i]=temp;
        }
    }
    }
    printf("\n After sorting array\n ");
   for(i=0;i<5;i++){
        printf("%d \t",arr1[i]);
    }
}   