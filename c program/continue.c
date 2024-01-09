#include<stdio.h>
int main(){
    int row;
    for(row=1;row<=10;row++){
        if(row==6){
            break;
        }
        printf("%d",row);
    }
}