//wap to find greatest of three numbers using ternery operator
//ternery operator general format
//   
//    condition ? expression1 :expression2
//
//if condition is true then exp1 is executed
//if its false then exp2 is executed

#include<stdio.h>

int main()
{
int x,y,z,n;

printf("enter three numbers:");
scanf("%d%d%d",&x,&y,&z);
n= (x>y) ? (x>z?x:z) : (y>z?y:z);
printf("\n%d is greatest",n);
return 0;
}
