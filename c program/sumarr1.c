#include<stdio.h>
int main(){
    int row,col, arr1[2][3],arr2[2][3],sum[2][3],sub[2][3];
    printf("enter the value of array1:");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr1[row][col]);
        }
    }
    printf("Enter the value of second arry:\n ");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            scanf("%d",&arr2[row][col]);
        }
    }
    printf("Printing the array1:\n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",arr1[row][col]);
        }
    }
    printf("Printing the array2:\n");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",arr2[row][col]);
        }
    }
    printf("\n The sum of two array is:");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            sum[row][col]=arr1[row][col]+arr2[row][col];
            //printf("%d",sum[row][col]);
        }
}   
printf("\n The subtraction of two array is:");
    for(row=0;row<2;row++){
        for(col=0;col<3;col++){
            sub[row][col]=arr1[row][col]-arr2[row][col];
            //printf("%d",sum[row][col]);
        }
}   
printf("\n sum of array");
for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",sum[row][col]);
        }
    }
    printf("\n subtraction of array");
    for(row=0;row<2;row++){
        printf("\n");
        for(col=0;col<3;col++){
            printf("%d \t",sub[row][col]);
        }
    }

}