#include<stdio.h>
#include<string.h>
int main(){
  FILE *fp;
  fp= fopen("G:\\batch9-10\\t1.txt","r");
  if(fp==NULL){
   perror("Error opening the file");
   return 1;
  }
  if(ferror(fp)){
    printf("error occured during file operations.");
  }
  clearerr(fp);
  fclose(fp);
}