//wap to swap two numbers using a temperary variable
#include<stdio.h>

int main ()
{
int x,y,temp;

printf("enter first number:");
scanf("%d",&x);
printf("enter second number:");
scanf("%d",&y);
temp = x;
x = y;
y = temp;

printf("swap:%d and %d\n\n",x,y);

}
