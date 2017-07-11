#include<stdio.h>
void main()
{
int base,exp,result=1;
scanf("%d",&base);
scanf("%d",&exp);
while(exp!=0)
{
result=base*exp;
exp--;
}
printf("%d",result);
}
