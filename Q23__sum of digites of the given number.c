#include<stdio.h>
#include<string.h>
intmain()
{
intsum=0;
 charstr[50];
 printf("enter any number : ");
 scanf("%s",str);
 for(inti=0;i<strlen(str);i++)
{
sum = sum+(str[i]-'0');
 }
printf("Sum of digits = %d\n",sum);
 return0;
 }