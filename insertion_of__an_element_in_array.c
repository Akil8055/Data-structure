#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements you want to enter in array =");
	scanf("%d",&n);
	int a[100],i,x,j;
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("elements in an array before insertion\n");
	for(i=0;i<n;i++)
     printf("%d ",a[i]);
	printf("\nenter the position of element at which you want enter a new element =");
	scanf("%d",&x);
	printf("enter element that you want to enter =");
	scanf("%d",&j);
	
	for(i=n;i>=x;i--)
	{
		a[i]=a[i-1];
	}a[x-1]=j;
	printf("elements in an array after insertion\n");
	for(i=0;i<=n;i++)
     printf("%d ",a[i]);
     return 0;
}
