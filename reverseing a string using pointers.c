#include<stdio.h>
#include<string.h>
int main()
{
	char string[100],*s,a;
	int i,j,l;
	printf("enter a string =");
	gets(string);
	printf("string before =");
	puts(string);
	s=string;
	l=strlen(string);
	for(i=0,j=l-1;i<l/2;i++,j--)
	{
		a=*(s+i);
		*(s+i)=*(s+j);
		*(s+j)=a;
	}
	printf("string after =%s",string);
	return 0;
}
