#include<stdio.h>
void main()
{
char str[100];
int count,countno,countalpha,countspace,countspecial,i;
countno=countalpha=countspace=countspecial=0;
gets(str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>=0 && str[i]<=9)
countno++;
else if(str[i]>=a && str[i]<=z)
countalpha++;
else if(str[i]==' ')
countspace++;
else
countspecial++;
}
printf("%d%d%d%d",countno,countalpha,countspace,countspecial);
}
