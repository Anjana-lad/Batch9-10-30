// AAAAA
// BBBB
// CCC
// DD
// E
#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++){
        for(col=5;col>=row;col--){
            printf("%c",ch); 
        }
        ch++;
        printf("\n");
    } 
}       