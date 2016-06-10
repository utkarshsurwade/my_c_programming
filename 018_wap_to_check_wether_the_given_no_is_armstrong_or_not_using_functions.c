//wap to check wether the given number is armstrong or not

#include<stdio.h>

int power(int,int);//creating_function or function_declaration or function_initializing

int main()
{
int n,temp,r,digits=0,sum=0;
printf("enter number to be checked:");
scanf("%d",&n);
temp=n;

while(temp!=0)
{
temp=temp/10;
digits++;
}

temp=n;

while(temp!=0)
{
r=temp%10;
sum=sum+power(r,digits)/*calling function*/;
temp=temp/10;
}

if(sum==n){
printf("%d is armstrong number\n",n);
}

else{
printf("%d is NOT an armstrong number\n",n);
}

}

int power(int x,int y)//function
{
int sumcontr=1,numcontr;

for(numcontr=1;numcontr<=y;numcontr++)
{
sumcontr=sumcontr*x;
}

return sumcontr;


}
