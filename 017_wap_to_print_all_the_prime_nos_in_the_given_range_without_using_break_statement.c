//wap to print all prime nos in given range without using break statement
#include<stdio.h>
int main ()
{
int i,j,lb,ub,f;
printf("enter lower and upper bound of the given range respectively:");
scanf("%d%d",&lb,&ub);
for(j=lb;j<=ub;j++)
{
f=0;
	for(i=2;i<j;i++)
	{
		if (j%i==0)
		f=1;
	}

if(f==0)
{
printf("%d\t",j);
}

}


}
