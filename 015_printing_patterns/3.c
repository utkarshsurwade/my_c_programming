/*

E
ED
EDC
EDCB
EDCBA

*/

#include<stdio.h>

int main()

{
int i,j,n;

printf("enter number:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(j=i;j!=0;j--)
	{
	printf("%c",65+n-j);
	
	}
printf("\n");
}
}
