//wap to check wether the given no. is prime or not using a variable(flag)

#include<stdio.h>
int main ()
{
int i,n,f=0;
printf("enter number:");
scanf("%d",&n);

for(i=2;i<n;i++)
{
if (n%i==0)
f=1;
}

if(f==0){
printf("%d is prime number\n",n);
}
else{
printf("%d is not a prime number\n",n);
}
}
