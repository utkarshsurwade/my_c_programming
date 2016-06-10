//wap to check wether the given number is armstrong or not

#include<stdio.h>

int power(int,int);

int main ()
{
int digits=0,n,temp,r,sum=0;
printf("enter number to be checked:");
scanf("%d",&n);
temp=n;
for(;temp!=0;digits++)
{
temp=temp/10;
}
temp=n;

for(;temp!=0;temp=temp/10)
{
r=temp%10;
sum=sum+power(r,digits);

}

 if (n == sum)
      printf("%d is an Armstrong number.\n", n);
   else
      printf("%d is not an Armstrong number.\n", n);
 
   return 0;

}

int power(int n, int r) {
   int c, p = 1;
 
   for (c = 1; c <= r; c++) 
      p = p*n;
 
   return p;   
}
