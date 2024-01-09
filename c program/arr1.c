#include<stdio.h>
int main(){
    int i, arrnm[]={5,8,3,7,6};
    for(i=0;i<5;i++){
        printf("%d \t",arrnm[i]);
    }
    printf("\n Printing the square of given array.");
    for(i=0;i<5;i++){
        printf("\t %d" ,arrnm[i]*arrnm[i]);
    }
}