#include<stdio.h>
int main(){
    int row,col, arr1[3][3]={{55,66,77},{11,12,13},{10,20,30}};
    printf("\n THe given 2 d array is:");
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
         printf("\n arr1[%d][%d]=%d",row,col,arr1[row][col]);
    }
 }
} 