#include<stdio.h>
int main(){
    int row,col, arr1[2][2];
    printf("enter the value of array1:");
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Printing the array1:\n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<2;col++){
            printf("%d \t",arr1[row][col]);
        }
    }
    printf("Transposing the array:");
    for(col=0;col<2;col++){
        printf("\n");
        for(row=0;row<2;row++){
            printf("%d \t",arr1[row][col]);
        }
    }
}  