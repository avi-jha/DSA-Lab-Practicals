#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct stu

{
char name[30];
int id;
int c;
}s;
int main()
{printf("enter the name ");
gets(s.name);
printf("enter id ");
scanf("%d",&s.id);
printf("enter class ");
scanf("%d",&s.c);

printf("\n name %s",s.name);
printf("\n id %d",s.id);
printf("\n class %d",s.c);
return 0;}
