//wap to print fabionachi series till the given number
#include<stdio.h>
int main ()
{
int p=0,c=1,sum,n;
printf("enter number:");
scanf("%d",&n);

printf("%d %d",p,c);
sum=p+c;
while(sum<=n)
{
printf("%d ",sum);
p=c;
c=sum;
sum=p+c;
}
printf("\n");

}
