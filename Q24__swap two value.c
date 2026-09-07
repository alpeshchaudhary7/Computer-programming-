#include<stdio.h>
int main()
{
float a,b,c;
printf("enter any two number= ");
scanf("%f %f",&a,&b);
printf("value before swap of a=%f and b=%f\n",a,b);
c=a;
a=b;
b=c;
printf("value after swap of a=%f and b=%f\n",a,b);
return 0;
}