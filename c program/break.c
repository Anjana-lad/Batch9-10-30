// lable:{
//     bodypart
// }
// goto lable:

#include<stdio.h>
int main(){
    int num1;
    for(num1=1;num1<=20;num1++){
        //printf("%d",num1);
        if(num1==15){
            goto jump;
        }
    }
    jump:
          printf("%d",num1-1);
} 