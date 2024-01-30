#include<stdio.h>
int main()
{
int a,b;
printf("enter any two values = ");
scanf("%d%d",&a,&b);
int *p=&a,*x=&b;
printf("values before swapping a=%d , b=%d\n",a,b);
*p=*p+*x;
*x=*p-*x;
*p=*p-*x;
printf("values after swapping a=%d , b=%d",a,b);
return 0;
}
