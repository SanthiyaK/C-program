#include<stdio.h>
void main()
{
int n,r,sum=0;
scanf("%d",&num);
n=num;
while(n!=0)
{
r=n%10;
sum=sum+(r*10);
n+=10;
}
if(num==n)
printf("reverse no");
else
print("not reverse");
}
