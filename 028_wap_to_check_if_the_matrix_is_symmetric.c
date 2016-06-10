//wap_to_check_if_the_matrix_is_symmetric

#include<stdio.h>
#define N 25
int main()
{
int m[N][N],i,j,r,c,k=0;

printf("enter rows and columns of matrix respectively:");
scanf("%d%d",&r,&c);
if(r!=c)
{
printf("invalid matrix\n");
return 0;
}

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	printf("enter m[%d][%d]:",i,j);
	scanf("%d",&m[i][j]);
	}
}

for(i=0;i<r;i++)
{
        for(j=0;j<c;j++)
        {
        	if( m[i][j] == m[j][i] )       
        	{
		k++;
		}
	}
}	
printf("%d\n",k);
if(k==(r*c))
{
printf("matric IS symmetric\n");
}
else
{
printf("matric is NOT symmetric\n");
}
}

