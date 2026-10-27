#include <stdio.h>
int main()
{
int a[100],c,i,j;
for(i=0;i<100;i++)
{
printf("enter any number:");
scanf("%d",&a[i]);
}
for(i=0;i<100;i++)
{
for(j=0;j<100;j++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
printf("largest number is %d and smallest number is %d",a[0],a[99]);
return 0;
}