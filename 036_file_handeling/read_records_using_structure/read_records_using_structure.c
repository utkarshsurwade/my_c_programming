#include<stdio.h>

struct emp{
char name[15];
int age;
float sal;
}e;

int main(){
FILE *fs;
fs=fopen("records.txt","r");

while( fscanf(fs,"%s %d %f \n",e.name,&e.age,&e.sal)!=EOF ){
printf("\n%s %d %f",e.name,e.age,e.sal);
}

printf("\n");
fclose(fs);
}
