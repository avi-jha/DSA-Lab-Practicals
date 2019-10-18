#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{char name[50];
int n=3;
int age;
int roll;
int i;
FILE *fp;
fp=fopen("class.txt","w+");
for(i=0;i<=n;i++)
{printf("\nName: ");
scanf("%s",&name);
fprintf(fp,"%s",name);
printf("\n age ");
scanf("%d",&age);
fprintf(fp,"\t%d\n",age);
printf("\n enter roll ");
scanf("%d",&roll);
fprintf(fp,"\t%d\n",roll);
}
}
