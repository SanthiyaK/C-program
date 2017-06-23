#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
if(n%4==0)
printf("Leap year");
else if(n%100==0)
printf("Not a Leap year");
else if(n%400==0)
printf("leap year");
else
printf("not a leaf year");
}
