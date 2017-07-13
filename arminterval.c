#include<stdio.h>
void main()
{
int num,n,r,sum=0,start,finish,i;
scanf("%d",&start);
scanf("%d",&finish);
for(i=start;i<=finish;i++)
{
n=i;
while(n!=0)
{
r=n%10;
sum=sum+(r*r*r);
n/=10;
}
if(num==n)
{
printf("Armstrong number");
}
else
{
printf("not a armstrong number");
}
}
}
