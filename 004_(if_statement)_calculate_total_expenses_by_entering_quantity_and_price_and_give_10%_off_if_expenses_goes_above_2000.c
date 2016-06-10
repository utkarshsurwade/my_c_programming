//wap to calculate the total expenses by entering quantity and price and give ten percent off if the expenses goes above 2000 bucks
#include<stdio.h>

int main() 
{

int qty;
float te,p,dis;
printf("enter quantity and price:");
scanf("%d%f",&qty,&p);
te=qty*p;
	if(te>2000)
	{
	 te=te-(te*0.1);
	}
printf("therefore total expense is %f\n",te);

}
