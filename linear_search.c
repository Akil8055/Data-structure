#include<stdio.h>
int main()
{
	int n;
	printf("enter how many elements you want to enter in array =");
	scanf("%d",&n);
	int i,a[n],j;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element that you want search in array =");
	scanf("%d",&j);
	for(i=0;i<n;i++)
	{
		if(a[i]==j)
		{
			printf("the element is at %d position ",i+1);
			break;
		}
		else if(i==n-1)
		{
			printf("unsucessful search");
		}
		
}
return 0;
}
