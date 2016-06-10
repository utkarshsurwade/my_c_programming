//wap to print sum of elements in the given array

#include<stdio.h>

int main ()
{
int n,a[25],i,sum=0;

printf("enter array size:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter value in a[%d]:",i);
scanf("%d",&a[i]);
}

for (i=0;i<n;i++)
{
sum=sum+a[i];
}

printf("\ntherefore sum of emements in array = %d\n",sum);

}
