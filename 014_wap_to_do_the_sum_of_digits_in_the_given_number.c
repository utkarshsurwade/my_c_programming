//wap to do the sum of digits in the given number

#include<stdio.h>

int main ()

{
int n,r,sum;

printf("enter number:");
scanf("%d",&n);

for (sum=0;n !=0 ;n=n/10)
{
r=n%10;
sum=sum+r;
}
printf("sum of digits in number is %d\n",sum);

}
