#include<stdio.h>
void main()
{
int n,i;
scanf("%d",&n);
for(i=1;i<=16;i++)
{
printf("%d*%d=%d",n,i,(n*i));
}
}
