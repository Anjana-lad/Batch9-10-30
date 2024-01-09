#include<stdio.h>
#include<string.h>
int main(){
  FILE *fp;
  fp= fopen("G:\\batch9-10\\t1.txt","w");
  fprintf(fp,"Reading and writing a file in same program.");
  fclose(fp);
  char arr[50];
  fp=fopen("G:\\batch9-10\\t1.txt","r");
   while(fscanf(fp,"%s",arr)!=EOF){
    printf(" %s ",arr);
   }
    fclose(fp);
  }

 