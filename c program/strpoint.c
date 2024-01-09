#include<stdio.h>
void add(char *str1,char *str2)
{
    while(*str1){
        str1++;
    }
    while(*str2){
        *str1=*str2;
        str1++;
        str2++;
    }
    *str1='\0';
}
    int main(){
    char str1[20],str2[20];
    printf("Enter strings");
    gets(str1);
    gets(str2);
    add(str1,str2);
    printf("The string is:%s",str1);
}