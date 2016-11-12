//wap to print the fabionachi series upto nth term
#include<stdio.h>
int main()
{
int p=0,c=1,count=2,sum=0,n;

printf("enter number:");
scanf("%d",&n);

printf("%d %d ",p,c);

while(count<n)
{
sum=p+c;
p=c;
c=sum;
printf("%d ",sum);
count++;
}
printf("\n");

}
