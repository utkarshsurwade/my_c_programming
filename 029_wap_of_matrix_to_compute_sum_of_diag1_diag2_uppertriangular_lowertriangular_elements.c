//wap to compute the sum of first ,second,lower triangular&upper triangular matrix

#include<stdio.h>
#define N 25

int main()
{
int n,m[N][N],i,j,r,c,sumd1=0,sumd2=0,sumu=0,suml=0;

printf("enter the dimension of matric:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	printf("enter m[%d][%d]",i,j);
	scanf("%d",&m[i][j]);
	}
}

for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j)
		{
		sumd1=sumd1+m[i][j];
		}
	
		if(i+j==n-1)
		{
                sumd2=sumd2+m[i][j];
		}
		
		if(i<j)
		{
		sumu=sumu+m[i][j];
		}

                if(i>j)
                {
                suml=suml+m[i][j];
                }
	}
}

printf("\nsum of diagonal1 elements = %d\n",sumd1);
printf("\nsum of diagonal2 elements = %d\n",sumd2);
printf("\nsum of upper triangular matrix elements = %d\n",sumu);
printf("\nsum of lower triangular matrix elements = %d\n",suml);

}
