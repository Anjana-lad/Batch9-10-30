#include<stdio.h>
int swap(int *x,int *y){
    int temp;
    printf("before swapping:x=%d,y=%d",*x,*y);
    temp=*x;
    *x=*y;
    *y=temp;
    printf("\n After swapping:x=%d,y=%d",*x,*y);
}
int main(){
    int a,b;
    printf("\n Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("\n The value after swapping:a=%d,b=%d",a,b);

}