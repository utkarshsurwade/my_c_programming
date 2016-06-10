//wap to print the fabionachi series upto nth term
#include<stdio.h>
int main()
{
int n,count=2,i,p=0,c=1;

printf("enter number:");
scanf("%d",&n);

printf("%d %d ",p,c);

while(count<n)
{
i=p+c;
p=c;
c=i;
printf("%d ",i);
count++;
}
printf("\n");

}
