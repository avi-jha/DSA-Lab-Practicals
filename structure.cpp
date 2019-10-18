
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct stu{
char name[30];
int id;
int c;
}s[5];
int main()
{int i;
for(i=0;i<=5;i++)
{
printf("enter the name ");
scanf("%s",&s[i].name);
printf("enter id ");
scanf("%d",&s[i].id);
printf("enter class ");
scanf("%d",&s[i].c);

}
for(i=0;i<=5;i++)
{
printf("\n name %s",s[i].name);
printf("\n id %d",s[i].id);
printf("\n class %d",s[i].c);
}}
