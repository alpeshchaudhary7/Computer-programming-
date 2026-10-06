#include <stdio.h>
int main()
{
int i,j=0,k,n;
printf("enter any number: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
k=2*i;
j=j+k;
}
printf("%d",j);
return 0;
}