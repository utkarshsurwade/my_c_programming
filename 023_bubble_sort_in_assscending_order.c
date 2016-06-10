//wap to sort the given array in ascending order or wap for bubble sort in asscending order

#include<stdio.h>

int main()
{
int n,a[25],i,j,temp;

printf("enter your array size:");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("enter value in a[%d]",i);
scanf("%d",&a[i]);
}

for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}	
	}


}
printf("\n\nyour array is:\n\n");

for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}


}
