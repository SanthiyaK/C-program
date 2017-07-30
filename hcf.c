#include<stdio.h>
void main()
{
int 
scanf("%d",&num1);
scanf("%d",&num2);
for(i=1;i<=num1 && i<=num2;i++)
{
if(num1%i==0 && num2%i==0)
{
hcf=i;
}
}
printf("%d",hcf);
}

