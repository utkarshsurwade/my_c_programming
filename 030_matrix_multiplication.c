//wap for matrix multiplication

#include<stdio.h>
#define N 25

int main()
{
int m[N][N],m1[N][N],m2[N][N],i,j,k,r1,c1,r2,c2;

printf("enter rows and columns of matrix1 respectively:");
scanf("%d%d",&r1,&c1);

printf("enter rows and columns of matrix2 respectively:");
scanf("%d%d",&r2,&c2);

if(c1!=r2)
{
printf("invalid dimentions for matrix multiplication\n");
return 0;
}

for(i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
	printf("enter m1[%d][%d]:",i,j);
	scanf("%d",&m1[i][j]);
	}
}

for(i=0;i<r2;i++)
{
        for(j=0;j<c2;j++)
        {
        printf("enter m2[%d][%d]:",i,j);
        scanf("%d",&m2[i][j]);
        }
}

for(i=0;i<r1;i++)
{
        for(j=0;j<c2;j++)
        {
        m[i][j]=0;
        }
}

for(i=0;i<r1;i++)
{
        for(j=0;j<c2;j++)
        {
        	for(k=0;k<c1;k++)
		{
		m[i][j]=m[i][j]+ ( m1[i][k] * m2[k][j] );
		}
        }
}
printf("\n\nyour multiplication matrix is:\n\n");
for(i=0;i<r1;i++)
{
        for(j=0;j<c2;j++)
        {
        printf("%d\t",m[i][j]);
        }
printf("\n");
}


}
