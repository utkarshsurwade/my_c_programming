//wap_to_print_the_sum_of_all_the_element_in_the_given_matrix
#include<stdio.h>
#define N 25
int main()
{
int m[N][N],i,j,r,c,sum=0;
printf("enter the rows and columns of the matrix respectively:");
scanf("%d%d",&r,&c);

for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
	printf("enter m[%d][%d]",i,j);
	scanf("%d",&m[i][j]);
	}
}

for(i=0;i<r;i++)
{
        for(j=0;j<c;j++)
        {
	sum=sum+m[i][j];
        }
}
printf("\n\nsum is %d\n",sum);

}
