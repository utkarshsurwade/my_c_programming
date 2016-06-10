//wap to to the addition of two matrix

#include<stdio.h>
#define N 10

int main()
{
int m[N][N],m1[N][N],m2[N][N],r,c,i,j;
printf("enter rows and colums of matrix respectively");
scanf("%d%d",&r,&c);


printf("enter values in first matrix:");


for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 printf("enter m1[%d][%d]=",i,j);
 scanf("%d",&m1[i][j]);
 }
}

printf("enter values in second matrix:");


for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 printf("enter m2[%d][%d]=",i,j);
 scanf("%d",&m2[i][j]);
 }
}

for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  m[i][j]=0;
 }
}


for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  m[i][j]=m[i][j]+m1[i][j]+m2[i][j];
 }
}

printf("\n\naddition of matrices is:\n\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
  printf("%d\t",m[i][j]);
 }
printf("\n");
}


} 
