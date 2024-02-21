#include<stdio.h>
int is_full();
int is_empty();
int pop();
void push(char a);
int peak();
int size();
void display();
int t=-1;
char s[25];
int main()
{
	char i[100],p[100];
	int j,k,a;
	printf("enter infix equation : ");
	gets(i);
	for(j=0,k=0;i[j]!='\0';)
	{
		if(i[j]<123&&i[j]>96||i[j]<='9'&&i[j]>='0')
		{
		 p[k]=i[j];
		 k++;
		 j++;	
		}
		else if(i[j]=='(')
		{
			push(i[j]);
			j++;
		}
		else if(i[j]==')')
		{
			while(peak()!='(')
		{
			p[k]=peak();
			pop();
			k++;
		}
		pop();
		j++;
		}
		else
		{
		if(is_empty()==1)
		{
			push(i[j]);
			j++;
		}
		else if((i[j]=='+'||i[j]=='-')&&(s[t]=='+'||s[t]=='-'||s[t]=='*'||s[t]=='/'||s[t]=='%')) 
		{
			p[k]=pop();
			k++;
		}
		else if((i[j]=='*'||i[j]=='/'||i[j]=='%')&&(s[t]=='+'||s[t]=='-'||s[t]=='('))
		{
			push(i[j]);
			j++;
		}
		else if((i[j]=='+'||i[j]=='-')&&s[t]=='(')
		{
			push(i[j]);
			j++;
		}
		else if((i[j]=='*'||i[j]=='/'||i[j]=='%')&&s[t]=='*'||s[t]=='/'||s[t]=='%')
		{
			p[k]=pop();
			k++;
		}	
	}
}
	if(is_empty()!=1)
	{
		for(j=t;j>=0;j--)
		{
			p[k]=s[j];
			k++;
		}
	}
	p[k]='\0';
	printf("postfix equation after conversion : ");
	puts(p);
	return 0;
}
int is_empty()
{
if(t==-1)
return 1;
else 
return 0;
}
int is_full()
{
if(t==24)
return 1;
else 
return 0;
}
int pop()
{
	char y;
	if(is_empty()==1)
	{
	printf("stack is empty");
	return;
    }
    else
	{
    y=s[t];
	t--;
	return y;	
	} 
}
void push(char a)
{
     if(is_full()==1)
	 printf("stack is full");
	 else
	 {
	 	t++;
	 	s[t]=a;
	 }
}
int peak()
{
	char y;
	if(is_empty()==1)
	{
	printf("stack is empty");
	return;
    }
    else
	{
    y=s[t];
	return y;	
	} 
}
int size()
{
	int y;
	y=t+1;
	return y;
}
void display()
{
	int i;
	for(i=t;i>=0;i--)
	printf("%c ",s[i]);
}

