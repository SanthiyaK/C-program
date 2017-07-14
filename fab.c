#include<stdio.h>
void main()
{
int n,a=0,b=1,c,i;
scanf("%d",&n);
for(i=1;i<n;i++)
{
printf("%d",c);
c=a+b;
a=c;
b=a;
}
}
