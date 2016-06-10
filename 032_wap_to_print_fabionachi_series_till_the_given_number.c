//wap to print fabionachi series till the given number
#include<stdio.h>
int main ()
{
int i,p=0,c=1,n;
printf("enter number:");
scanf("%d",&n);
printf("%d %d",p,c);
i=p+c;
while(i<=n)
{
printf("%d ",i);
p=c;
c=i;
i=p+c;
}
printf("\n");

}
