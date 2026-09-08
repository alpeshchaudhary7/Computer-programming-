#include <stdio.h>
int main()
{
float a,b;
printf("Enter gross salary: ");
scanf("%f", &a);
if (a>20000)
{
b=a15/100;
printf("net salary is %f",a-b);
}
else if(a>10000)
{
b=a10/100;
printf("net salary is %f",a-b);
}
else
{
b=a*5/100;
printf("net salary is %f",a-b);
}
return 0;
}