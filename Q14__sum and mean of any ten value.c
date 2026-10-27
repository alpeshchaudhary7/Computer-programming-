#include <stdio.h>
int main()
{
int i,a[10];
float c=0;
for(i=0;i<10;i++)
{
printf("print any number: ");
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
c=c+a[i];
}
printf("sum of all the entered number is :%.2f\n",c);
printf("mean of all the entered number is :%.2f\n",c/10);
return 0;
}