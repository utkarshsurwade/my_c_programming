//wap to print even number in the given range

#include<stdio.h>

int main()
{

int l,u,i;
printf("enter lower bound:");
scanf("%d",&l);
printf("enter upper bound:");
scanf("%d",&u);

for(i=l;i<=u;i++)
{

if( (i%2) == 0 )
{
printf("%d\n",i);
}

}

}
