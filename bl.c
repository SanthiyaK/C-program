#include<stdio.h>
void main()
{
int i;
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
big=low=a[0];
for(i=0;i<n;i++)
{
if(a[i]>big)
a[i]=big;
if(a[i]<low)
a[i]=low;
}
printf("the largest no",big);
printf("the smallest nno",low);
}
