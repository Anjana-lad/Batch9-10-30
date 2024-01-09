//fact=fact*i//factorial using recursion.
#include<stdio.h>
int fact(int f){
    if(f == 1){
        return 1;
    }
    else{
       return f=f*fact(f-1); 
    }
    
}
int main(){
    int num;
    printf("Enter num:");
    scanf("%d",&num);
   // fact(num);
    printf("the value of factorial is:%d",fact(num));
}