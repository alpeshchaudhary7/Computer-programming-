#include<stdio.h>
int main()
{
float a,b;
printf("enter any two number= ");
scanf("%f %f",&a,&b);
if(a>b)
{
printf("largest=%f and smallest=%f",a,b);
}
else
{
printf("largest=%f and smalest=%f",b,a);
}
return 0;
}