#include<stdio.h>
#include<math.h>
int is_full();
int is_empty();
int pop();
void push(int a);
int peek();
int size();
void display();
int s[25],t=-1;
int main()
{
	char p[100];
	int i;
	int j,y,f;
	
	printf(" enter postfix expression = ");
	gets(p);
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]>='0'&&p[i]<='9')
		{
			push(p[i]-'0');
			
		}
		else
		{
		    j=pop();
			y=pop();
		switch (p[i])
		{
			case '+':
				f=y+j;
				push(f);
				
				break;
			case '-':
				f=y-j;
				push(f);
				break;
		    case '*':
				f=y*j;
				push(f);
				break;
			case '/':
				f=y/j;
				push(f);
				break;
			case '%':
				f=y%j;
				push(f);
				break;
			case '^':
				f=pow(y,j);
				push(f);
				break;		
		}
	}
	}
	
	printf(" Result = %d",pop());
	
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
if(t==size()-1)
return 1;
else 
return 0;
}
int pop()
{
	int y;
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
void push(int a)
{
     if(is_full==1)
	 printf("stack is full");
	 else
	 {
	 	t++;
	 	s[t]=a;
	 }
}
int peek()
{
	int y;
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
	printf("%c\n",s[i]);
}
