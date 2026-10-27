#include<stdio.h>
intmain()
{
inti,a,j,sum=0;
 for(i=2;i<=500;i++)
{
a=1;
 for(j=2;j<i;j++)
{
if(i%j==0)
{
a = 0;
 break; 
}
}
if(a==1)
{
sum = sum+i;
 }
}
printf("%d\n",sum);
 return0;
 }