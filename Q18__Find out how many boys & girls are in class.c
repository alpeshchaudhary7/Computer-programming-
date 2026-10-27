#include<stdio.h>
intmain()
{
inta[50],boy=0,girl=0;
 printf("total number of student in the class are 50\n");
 for(inti=0;i<50;i++)
{
printf("enter the gender of the student %d (enter 0 for boy and 1 for girl): \n",i+1);
 scanf("%d",&a[i]);
 }
for(inti=0;i<50;i++)
{
if(a[i]==0)
{
boy = boy+1; 
}
if(a[i]==1)
{
girl = girl+1;
 }
}
printf("NUMBER OF BOY IN TNE CLASS ARE %d AND NUMBER OF GIRLS IN THE CLASS ARE %d",boy,girl);
 return0; 
}