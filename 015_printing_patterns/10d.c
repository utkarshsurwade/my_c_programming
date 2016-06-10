/*

12345
6789
101112
1314
15

*/

#include<stdio.h>

int main()
{
int n,i,j,c=1;

printf("enter number");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(j=i;j<=n;j++,c++)
	{
	printf("%d\t",c);
	}
printf("\n");
}

}
