#include <stdio.h>
int main()
{
int i,j,n;
printf("enter any no.: ");
scanf("%d",&j);
for(i=2;i<j;i++)
{
if(j%i==0)
{
printf("give no. Is not prime no.\n");
break;
}
else
{
printf("given no. is prime\n");
break;
}
}
return 0;
}