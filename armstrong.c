#include<stdio.h>
void main()
{
int num,n,r,sum=0;
scanf("%d",&num);
n=num;
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
