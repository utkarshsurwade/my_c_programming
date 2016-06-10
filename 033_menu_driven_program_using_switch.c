//wap to display menu and find the +-/* of two numbers using switch

#include<stdio.h>

int main()
{
int n1,n2,op,i;
do{
printf("enter two numbers:");
scanf("%d%d",&n1,&n2);
printf("***************\n");
printf("1:addition\n");
printf("2:subtraction\n");
printf("3:multiplication\n");
printf("4:dividion\n");
printf("***************\n");
printf("choose option\n");
scanf("%d",&op);
switch (op)
{
case 1:
printf("%d\n",n1+n2);
break;

case 2:
printf("%d\n",n1-n2);
break;

case 3:
printf("%d\n",n1*n2);
break;

case 4:
printf("%d\n",n1/n2);
break;

default:
printf("invalid option\n");
break;
}
printf("do u want to continue?\nyes-1 and no-0:");
scanf("%d",&i);
}
while(i!=0);
}
