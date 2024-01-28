#include<stdio.h> 
int power(int *x,int *y);
int main()
{
	int a,b,r;
	printf("enter any number =");
	scanf("%d",&a);
	printf("enter power = ");
	scanf("%d",&b);
	r=power(&a,&b);
	printf("%d power of %d = %d",b,a,r);
	return 0;
}
int power(int *x,int *y)
{
	int i,r=1;
	for(i=1;i<=*y;i++)
		r=r*(*x);
	return r;
 } 
