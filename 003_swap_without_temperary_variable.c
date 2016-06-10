//wap to swap two numbers without using a temperary variable
#include<stdio.h>

int main()
{
int x,y;
printf("enter two numbers:");
scanf("%d%d",&x,&y);

x=x+y;
y=x-y;
x=x-y;
printf("swap:%d and %d\n",x,y);


}
