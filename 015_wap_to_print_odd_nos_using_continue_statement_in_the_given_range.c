//wap to print odd no. using continue statement in a given range?

#include<stdio.h>

int main ()

{
int n,i,lb,ub;

printf("enter lower bound and upper bound of the range respectively:");
scanf("%d%d",&lb,&ub);

for(i=lb;i<=ub;i++)
{
	if(i%2==0)
	{
	continue;
	}

	else
	{
	printf("%d ",i);
	}
}


}
