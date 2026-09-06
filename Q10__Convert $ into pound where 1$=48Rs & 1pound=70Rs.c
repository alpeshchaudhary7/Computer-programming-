#include<stdio.h>
int main()
{
float a;
printf("enter number of dollars= $");
scanf("%f",&a);
printf("number of pounds of the given dollars is: %f pounds\n",a*48/70);
return 0;
}