/*

A		ascii translation
AB		A=65	B=66	C=67	D=68	E=69
ABC
ABCD
ABCDE

*/

#include<stdio.h>

int main()

{
int n,i,j;

printf("enter number");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	printf("%c",64+j);
	}
printf("\n");
}

}
