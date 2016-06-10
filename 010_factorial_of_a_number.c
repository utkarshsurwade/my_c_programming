//wap to finf factorial of the given number

#include<stdio.h>

int main()
{
int n,i,product=1;
printf("enter number:");
scanf("%d",&n);

for(i=1;i<=n;i=i+1)
{
product=i*product;
}

printf("factorial is %d\n",product);

}
