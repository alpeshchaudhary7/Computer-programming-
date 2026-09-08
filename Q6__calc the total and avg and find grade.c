#include<stdio.h>
int main()
{
float a,b,c,d,avg;
printf("enter the marks of three subject= ");
scanf("%f %f %f",&a,&b,&c);
d=a+b+c;
printf("total of all three subject= %f\n",d);
avg=d/3;
printf("average of all three subject=%f\n",avg);
if(avg>=70)
{
printf("your grade=distinction\n");
}
else if(avg>=60)
{
printf("your grade=first class\n");
}
else if(avg>=50)
{
printf("your grade=second class\n");
}
else if(avg>=35)
{
printf("your grade=third class\n");
}
else
{
printf("you fail the exam\n");
}
return 0;
}