#include<stdio.h>
int main(){
    int row,col, arr1[2][3];
    printf("enter the value of array:");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Printing the array:\n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",arr1[row][col]);
        }
    }
}   