#include<stdio.h>
#include<string.h>
intmain()
{
intj;
 charstr[50],rev[50];
 printf("enter any number : ");
 scanf("%s",str);
 j = strlen(str);
 for(inti=0;i<strlen(str);i++)
{
rev[j] = str[i];
 j--;
 }
printf("number after reversing are %s",rev);
 return0;
 }