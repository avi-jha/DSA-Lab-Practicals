#include<stdio.h>
#include<string.h>
int main()
{char n[66];
int i;
printf("enter the name ");
gets(n);
for(i=0;n[i]!='\0';i++)
{if((n[i]>='a')&&(n[i]<='z'))
n[i]=n[i]-32;
else if((n[i]>='A')&&(n[i]<='Z'))
n[i]=n[i]+32;
}
for(i=0;n[i]!='\0';i++)
printf("%c",n[i]);
return 0;
}
