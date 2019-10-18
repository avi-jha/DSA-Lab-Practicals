#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],str1[10],str2[10],a;
	gets(str);
	scanf("%c",&a);
	int i;
	for(i=0;i<=(strlen(str));i++)
	{
		if(str[i]=='b' )
		{
			str[i]='\0';
			i++;
	    	printf("%s",str);
			
		}
		else
		{
		for(i=0;i<=(strlen(str));i++)
		printf("%c",a);
			
		}
	
	
		
	 } 
}

