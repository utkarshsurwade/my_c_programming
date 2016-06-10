/*

1
23
456
78910
1112131415

*/

#include<stdio.h>

int main()

{
int n, i,j,c=1;

printf("enter number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++,c++)
	{
	printf("%d\t",c);
	
	}
 printf("\n");
}

}
