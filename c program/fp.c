#include<stdio.h>
#include<string.h>
int main(){
  FILE *fp;
  char string[50];
  fp= fopen("G:\\batch9-10\\test.txt","r");
  if(fp==NULL){
    printf("FIle Not found");
  }
  else{
    printf("File created");
   while(fgets(string,50,fp)!=NULL){
    printf(" \n %s",string);
   }
    fseek(fp,0,SEEK_END);
    printf("\n %d",ftell(fp));
   rewind(fp);
    fclose(fp);
  }
}
 