#include<stdio.h>
void fibo(int);

void main()
{int n;
 printf("up till what no. do you want to print the series?");
scanf("%d",&n);
printf("fibonacii series:\n");
fibo(n);
}

void fibo(int n)
{
int p=0,c=1,count=2,sum=0;
if(n==1)
printf("0\n");
else if(n==2)
printf("0 1\n");
else
{
  printf("0 1 ");
  while(count <n)
  {
  sum=p+c;
  p=c;
  c=sum;
  count++;
  printf("%d ",sum);
  }
  printf("\n");

}

}
