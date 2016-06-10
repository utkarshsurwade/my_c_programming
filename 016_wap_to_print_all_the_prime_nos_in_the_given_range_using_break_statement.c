//wap to print all the prime nos. in the goven range using break statement
//without using using flags
#include<stdio.h>

int main ()
{
int lb,ub,i,j;

printf("enter lower and upper bound of the range respectively:");
scanf("%d%d",&lb,&ub);

for(i=lb;i<=ub;i++)
{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
		break;
		}
	
	}
if(i==j)
{
printf("%d ",i);
}

}

}
