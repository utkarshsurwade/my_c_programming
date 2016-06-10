//wap to print armstrong number in the given range 1 to 1000

#include<stdio.h>

int main()
{
int i,j,sum;

for (i=1;i<=1000;i++)
{ 
j=i;
sum=0;

while(j!=0)
{sum = sum+(j%10)*(j%10)*(j%10);
j=j/10;
}



if(i==sum)
printf("%d \n",i);

}

}
