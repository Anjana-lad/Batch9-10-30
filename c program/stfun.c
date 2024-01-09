#include<stdio.h>
struct student{
    int rollno;
    char grade;
    float marks[4];
};
void display(struct student s){
    printf("Rollno is:%d \n ",s.rollno);
    printf("Grade:%c \n",s.grade);
    int size=sizeof(s.marks)/sizeof(float);
    for(int i=0;i<size;i++){
        printf("%f \n",s.marks[i]);
    }
}
int main(){
    struct student st = {1,'A',{99,52,75,63}};
    struct student s2={2,'B',{55,66.8,41.89,35.5}};
    display(st);
    display(s2);
}