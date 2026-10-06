#include <stdio.h>
int main()
{
int i,j=1,n;
printf("enter any number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
j=j*i;
}
printf("%d",j);
return 0;
}