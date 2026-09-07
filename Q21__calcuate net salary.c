#include<stdio.h>
int main()
{
float a,b,c;
printf("enter the gross salary= ");
scanf("%f",&a);
b=a*3/100;
c=a/10;
printf("Net salary= %f RS\n",a+c-b);
return 0;
}