#include<stdio.h>
int primefact(int);

int main()
{
int n,p;
printf("enter number:");
scanf("%d",&n);
printf("prime factors are\n\n");
p=primefact(n);
printf("%d",p);
}

int primefact(int n)
{
int i=2;
while(n!=0)
{
	if(n%i==0)
	{
	printf("%d ",i);
	n=n/i;

	}
	else
	i++;

}

}
