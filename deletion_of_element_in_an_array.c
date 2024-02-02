#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements you want to enter in array =");
	scanf("%d",&n);
	int a[100],i,x;
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("elements in an array before deletion\n");
	for(i=0;i<n;i++)
     printf("%d ",a[i]);
	printf("\nenter the position of element at which you want delete element =");
	scanf("%d",&x);
	for(i=x;i<n;i++)
	{
		a[i-1]=a[i];
	}
	printf("elements in an array after deletion\n");
	for(i=0;i<n-1;i++)
     printf("%d ",a[i]);
     return 0;
}
