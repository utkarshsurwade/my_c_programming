#include<stdio.h>

int main(){
FILE *fs;
char ch;
fs=fopen("khan.txt","r");// r stands for reads mode

if(fs==NULL){
printf("\nfile not found\n");
return 0;
}

while( (ch=fgetc(fs))!=EOF){
printf("%c",ch);
}

fclose(fs);
}
