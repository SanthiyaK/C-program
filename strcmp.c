#include<stdio.h>
void main()
{
char str[100];
int diff;
printf("enter the frist string");
scanf("%s",&str1);
printf("enter the second string");
scanf("%s",&str2);
while(str1[i]!='\0' || str2!='\0')
{
diff=(str1[i]-str2[i]);
  if(diff!=0)
    break;
i++;
}
if(diff>0)
 printf("%s comes after %s",str1,str2);
if(diff<0)
 printf("%s comes after %s",str2,str1); 
if(diff==0)
 printf("Both the strings are equal");
 }
