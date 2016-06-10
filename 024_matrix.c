//wap to take input as a matrix and display it on screen

#include<stdio.h>

int main()
{
int m[25][25],r,c,i,j;

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

printf("\n\nmatrix is:\n\n");

for(i=0;i<r;i++)
{
        for(j=0;j<c;j++)
        {
        printf("%d ",m[i][j]);
			 	
        }
printf("\n"); 
}

}
