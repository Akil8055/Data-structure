#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char p[100],s[25];
	int i,j=-1;
	printf(" enter postfix expression = ");
	gets(p);
	for(i=0;p[i]!='\0';)
	{
		if(p[i]>='0'||p[i]<='9')
		{
			s[j++]=p[i];
		}
		else if(p[i]=='+')
		{
			s[j-1]=s[j-1]+s[j];
		}
		else if(p[i]=='-')
		{
			s[j-1]=s[j-1]-s[j];
		}
		else if(p[i]=='*')
		{
			s[j-1]=s[j-1]*s[j];
		}
		else if(p[i]=='/')
		{
			s[j-1]=s[j-1]/s[j];
		}
		else if(p[i]=='+')
		{
			s[j-1]=s[j-1]+s[j];
		}
		else if(p[i]=='%')
		{
			s[j-1]=s[j-1]%s[j];
		}
	}
	printf("%c",s[j]);
	return 0;
}
