#include<stdio.h>

int main(){
FILE *fs;
fs=fopen("khan.txt","r");
int t=0,s=0,c=0,n=0;
char ch;

if(fs==NULL){
printf("\nfile not found");
return 0;
}

while( (ch=fgetc(fs))!=EOF){
c++;

	if(ch=='\n')
	n++;

	if(ch=='\t')
	t++;

	if(ch==' ')
	s++;
}
printf("\nnumer of character is:%d",c);
printf("\nnumer of new lines is:%d",n);
printf("\nnumer of tabs is:%d",t);
printf("\nnumer of spaces is:%d",s);
printf("\n\n");
fclose(fs);
}
