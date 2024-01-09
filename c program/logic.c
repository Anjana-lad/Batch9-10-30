//logical oper and,or,not &&,||,!
//a b res or not a
//0 0 0  0  1
//0 1 0 1 1
//1 0 0  1 0
//1 1 1  1 0

#include<stdio.h>
int main(){
    int n1=25,n2=18,and;
    and=(n1>=n2) && (n1<10);
    printf("The res is:%d",and);
   // !n1;
    printf("the logical not is: %d",!n1);
    
}
