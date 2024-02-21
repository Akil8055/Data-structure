#include<stdio.h>
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
	push(4);
	push(5);
	push(9);
	pop();
    pop();
	push(8);
	push(7);
	push(69);
	printf("size 0f stack =%d\n",size());
	printf("elements in stack\n");
	display();
	
	
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
	printf("%d\n",s[i]);
}
