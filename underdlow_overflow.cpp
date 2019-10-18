#include<stdio.h>
#define max 10
int stack[max],ch,tos,n,x,i;
int push(int a)
{
if(tos==max-1)
printf("overflow");
else
{
tos=tos+1;
stack[tos]=x;
}
}
int pop(int a)
{
if(tos==-1)
printf("underflow");
else
{
stack[tos]=0;
tos=tos-1;
}
}
int main()
{int tos=-1;
for(i=0;i<=max;i++);
{

printf("enter choice 1 for push and 2 for pop ");
scanf("%d",&ch);
switch(ch)
{case 1: printf("enter the data to be pushed ");
         scanf("%d",&x);
         push(x);
         break;
 case 2: pop(x);
         break;       
 
}
for(i=0;i<=max-1;i++)
printf("%d",stack[i]);
}
}

