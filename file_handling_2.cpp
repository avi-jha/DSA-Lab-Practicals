#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main()
{int n=5;
int i;
char nb[50];
FILE *fp;
fp=fopen("class.csv","r+");
for(i=0;i<=n;i++)
{
printf("\n enter the name of book ");
scanf("%s",&nb);
fscanf(fp,"%s",nb);
}
fclose(fp);
}
