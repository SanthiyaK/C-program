#include<stdio.h>
void main()
{
int i,n,flag=0,finish;
  printf("enter the number");
scanf("%d",&n);
while(n<=finish)
{
for(i=0;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag==0)
printf("prime num");
else
printf("not a prime no");
n++;
}
}
