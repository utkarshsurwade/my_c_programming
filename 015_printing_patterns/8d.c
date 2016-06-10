/*

ABCDE
ABCD
ABC
AB
A

*/

#include<stdio.h>

int main()
{
int n,i,j;

printf("enter number");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(j=i;j<=n;j++)
	{
	printf("%c",64+j);
	}
printf("\n");
}

}
