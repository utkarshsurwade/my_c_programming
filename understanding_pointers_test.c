//learning pointers

#include<stdio.h>

int main()
{
int x=10,*p,y=20;

p=&x;
*p=22;

printf("x=%d\n",x);
printf("address of x=%u\n",&x);
printf("p=%u\n",p);
printf("address of p=%u\n",&p);
printf("*p=%d\n",*p);
printf("*(&x)=%d\n",*(&x) );
printf("**(&p)=%d\n",**(&p) );
/*
p=&y;
*p=100;

printf("y=%d\n",y);
printf("address of y=%u\n",&y);
printf("p=%u\n",p);
printf("address of p=%u\n",&p);
printf("*p=%d\n",*p);
printf("*(&y)=%d\n",*(&y) );
printf("**(&p)=%d\n",**(&p) );
*/
}
