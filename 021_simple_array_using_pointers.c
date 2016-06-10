//wap to store and access data in an array using pointers

#include<stdio.h>
int main()
{
int i,a[25],n,*p;

printf("enter array size:");
scanf("%d",&n);

/*

p=&a[0];

for(i=0;i<n;i++)
{
printf("enter a[%d]:",i);
scanf("%d",p+i);//storing in array adress instead of array bocks ie a[0] to a[n-1]
}

printf("\n\nyour array is:\n\n");

for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,*(p+i) );//dereferencing
}

*/

i=0;
for(p=a;p!=a+n;p++,i++)
{
printf("enter value in a[%d]",i);
scanf("%d",p);
}

printf("\n\nyour array is\n\n");

for(p=a;p!=a+n;p++,i++)
{
printf("value in a[%d]=%d\n",i,*p);
}

}
