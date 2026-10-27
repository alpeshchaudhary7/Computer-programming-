#include <stdio.h>
int main()
{
int n;
printf("enter the amount of number you want to add: ");
scanf("%d",&n);
int i,a[n];
float c=0;
for(i=0;i<n;i++)
{
printf("print any number: ");
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=c+a[i];
}
printf("sum of all the entered number is :%.2f\n",c);
printf("mean of all the entered number is :%.2f\n",c/n);
return 0;
}