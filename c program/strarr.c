#include<stdio.h>
#include<string.h>
int main(){
   char str1[30];
   char str2[]="programming";
   printf("Enter str1:");
   gets(str1);
   printf("\n The string first char is:%c",str1[0]);
   int res1=strcmp(str2,str1);
   printf("\n The result is:%d",res1);
   printf("\n The length of string is:%d",strlen(str1));
   printf("\n The string is:%s",strstr(str2,"program"));
   printf("\n Concatenate:%s",strcat(str1,str2));
   printf("\n the revserse of string is:%s",strrev(str2));
   printf("\n Copy of string :%s",strcpy(str2,str1));
} 