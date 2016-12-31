#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){
char s[MAX];
FILE *fs;

if(fs==NULL){
printf("file not foun\nd");
}
printf("enter your notes:\n");
gets(s);//get complete string 

fs=fopen("notes.txt","w");//w stands for write mode(completely new file notes.txt will be created)

fputs(s,fs);
fclose(fs);

printf("\nsuccessfully written\n");
}
