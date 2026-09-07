#include<stdio.h>
int main()
{
float a,b,c,d;
printf("enter number of bytes= ");
scanf("%f",&a);
b=a/1024;
c=b/1024;
d=c/1024;
printf("number of KB of the given bytes is: %f KB\n",b);
printf("number of MB of the given bytes is: %f MB\n",c);
printf("number of GB of the given bytes is: %f GB\n",d);
return 0;
}