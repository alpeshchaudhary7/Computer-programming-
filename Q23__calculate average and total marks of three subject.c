#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter the marks of three subject= ");
scanf("%f %f %f",&a,&b,&c);
d=a+b+c;
printf("total of all three subject= %f\n",d);
printf("average of all three subject=%f\n",d/3);
return 0;
}