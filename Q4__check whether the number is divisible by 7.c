#include <stdio.h>
int main()
{
int a,b;
printf("Enter any number: ");
scanf("%d", &a);
b=a%7;
if(b==0)
{
printf("yes,%d is divisible by 7",a);
}
else
{
printf("no,%d is not divisible by 7",a);
}
return 0;
}