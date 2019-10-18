#include<stdio.h>

#include <stdlib.h>
#include<string.h>
void display(struct stu []);

struct stu{
char name[30];
int id;
int c;
};
void display();

int main()
{
struct stu s1[5];
int i;
for(i=0;i<=5;i++)
{
printf("enter the name ");
scanf("%s",&s1[i].name);
printf("enter id ");
scanf("%d",&s1[i].id);
printf("enter class ");
scanf("%d",&s1[i].c);
}
display(s1);
return 0;

}

void display(struct stu s1[])
{
int i;
for(i=0;i<=5;i++)
{

printf("\n name %s",s1[i].name);
printf("\n id %d",s1[i].id);
printf("\n class %d",s1[i].c);
}
}
