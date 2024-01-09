#include<stdio.h>
int main(){
    int row,col, arr1[2][3],arr2[2][3],sum[2][3];
    printf("\n enter the values of  2 d array is:");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
     printf("\nThe matrix is : \n");
    for (row=0;row<2;row++) {
        printf("\n");
        for (col=0;col<3;col++)
            printf("%d \t",arr1[row][col]);
    }
    printf("\n\n");
    for(row=0;row<2;row++){
         printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t ",arr2[row][col]);
        }
    }
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            sum[row][col]=arr1[row][col]+arr2[row][col];
        }
    }
    printf("\n The sum of array is:\n");
    for(row=0;row<2;row++){
         printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",sum[row][col]);
        }
    }        
}  