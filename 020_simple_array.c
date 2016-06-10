//wap to get the size of array from user,get the values from usser,store it in the array &
//display it back

#include<stdio.h>

int main()
{
int n,i;

printf("enter array size:");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("enter value in a[%d]:",i);
scanf("%d",&a[i]);
}
printf("your array is\n\n");

for(i=0;i<n;i++)
{
printf("a[%d]=%d\n",i,a[i]);
}

}
