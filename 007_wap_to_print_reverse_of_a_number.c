//wap to print reverse of a number
//7%10=7 and 7/10=0
#include<stdio.h>

int main()
{
int n,r,rev;
printf("enter number to be reversed:");
scanf("%d",&n);

for(rev=0;n != 0;n=n/10)
{
r=n%10;
rev=((rev*10) + r);
}
printf("reverse is: %d\n",rev);
}
