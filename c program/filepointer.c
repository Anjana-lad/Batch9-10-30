#include<stdio.h>
#include<string.h>
int main(){
  FILE *fp;
  char string[]="Welcome to tops.World best IT training center";
  fp= fopen("G:\\batch9-10\\test.txt","w");
  if(fp==NULL){
    printf("FIle Not found");
  }
  else{
    printf("File created");
  if(strlen(string)>0){
        fputs(string,fp);
        fputs("\n",fp);
    }
  }
  fclose(fp);
    printf("\n Data added to the file");
}