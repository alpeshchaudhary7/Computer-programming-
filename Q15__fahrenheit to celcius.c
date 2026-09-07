#include<stdio.h>
int main()
{
float a,b;
printf("enter number of fahrenheit= ");
scanf("%f",&a);
b=a-32;
printf("number of celcius of the given fahrenheit is: %f °C\n",b*5/9);
return 0;
}