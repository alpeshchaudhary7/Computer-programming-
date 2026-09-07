#include<stdio.h>
int main()
{
float a,b;
printf("enter the gross salary= ");
scanf("%f",&a);
b=a*10/100;
printf("Net salary= %f RS\n",a-b);
return 0;
}