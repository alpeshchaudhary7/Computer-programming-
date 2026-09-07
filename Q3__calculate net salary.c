#include <stdio.h>
int main()
{
float a,b,c;
printf("Enter gross salary: ");
scanf("%f", &a);
if (a>5000)
{
b=a7/100;
c=a2/100;
printf("net salary is %f",a+b-c);
}
else if(a>10000)
{
b=a10/100;
c=a3/100;
printf("net salary is %f",a+b-c);
}
else
{
printf("net salary is %f",a);
}
return 0;
}