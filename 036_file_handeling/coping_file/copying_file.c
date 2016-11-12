#include<stdio.h>

int main(){
FILE *fs,*ft;//created file pointer
char ch;
fs=fopen("khan.txt","r");//r stands for reads mode
ft=fopen("duplicate.txt","a");//a stands for append(continue writing to existing file)

if(fs==NULL){
printf("\nfile not found\n");	//checking if file exists
return 0;
}

while( (ch=fgetc(fs) )!=EOF){
fputc(ch,ft);//fputc automatically increments so that ch will read next character
}

printf("File copied succesfully\n");
fclose(fs);
fclose(ft);

}
