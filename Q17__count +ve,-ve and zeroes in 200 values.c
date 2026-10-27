#include <stdio.h>
int main()
{
int a[20],positive=0,negative=0,i,j=0;
for(i=0;i<20;i++)
{
printf("enter any number:");
scanf("%d",&a[i]);
}
for(i=0;i<20;i++)
{
if(a[i]>0)
{
positive=positive + 1;
}
else if(a[i]<0)
{
negative=negative + 1;
}
else
{
j = j + 1;
}
}
printf("number positive are %d and number of negative are %d and number of zeroes are %d ",positive,negative,j);
return 0;
}