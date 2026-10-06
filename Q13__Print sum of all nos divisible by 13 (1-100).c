#include <stdio.h>
int main()
{
int i,j=0,n;
for(i=1;i<=100;i++)
{
n=i%13;
if(n==0)
{
j=j+i;
}
}
printf("%d",j);
return 0;
}