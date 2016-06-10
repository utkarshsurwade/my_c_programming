//wap to print the transpose of a matrix

#include<stdio.h>
#define N 25
int main()
{
int m[N][N],r,c,i,j;

printf("enter roes and columns of the matrix respectively:");
scanf("%d%d",&r,&c);

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	printf("enter m[%d][%d]",i,j);
	scanf("%d",&m[i][j]);
	}
}

printf("\n\nthe transpose of matrix is:\n\n");

for(i=0;i<c;i++)
{
        for(j=0;j<r;j++)
        {
        printf("%d ",m[j][i]);
			 	
        }
printf("\n"); 
}

}
