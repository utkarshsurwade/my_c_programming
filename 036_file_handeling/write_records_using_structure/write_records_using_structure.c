#include<stdio.h>

struct emp{
char name[15];
int age;
float sal;
}e;

int main(){
FILE *fs;
fs=fopen("records.txt","a");
int op;

do{
printf("enter name,age,basic sallary:\n");
scanf("%s%d%f",e.name,&e.age,&e.sal);
fprintf(fs,"%s %d %f \n",e.name,e.age,e.sal);

printf("\nwould u like to enter another record?(yes-1/no-0)\n");
scanf("%d",&op);

}while(op==1);

fclose(fs);
}
