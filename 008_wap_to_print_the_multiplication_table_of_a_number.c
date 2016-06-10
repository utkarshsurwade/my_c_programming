//wap to print the multiplication table for the given number

#include<stdio.h>

int main()
{
int n,i,product;
printf("enter number:");
scanf("%d",&n);
 
for(i=1;i<=10;i++)
{
product=i*n;
printf("%d * %d = %d\n",n,i,product);

}
}
