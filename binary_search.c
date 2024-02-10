#include<stdio.h>
int main()
{
	int n,low,high;
	printf("enter how many elements you want to enter in array =");
	scanf("%d",&n);
	int i,a[n],j;
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element that you want search in array =");
	scanf("%d",&j);
	low=0;
	high=n-1;
	for(i=n/2;;)
	{
		if(a[i]==j)
		{
			printf("The element is at %d position",i+1);
			break;
		}
		else if(low>high)
		{
			printf("unsucessfull search");
			break;
		}
		else if(a[i]<j)
		{
			low=i+1;
			i=(i+1+n)/2;
			
			continue;
		}
		else if(a[i]>j)
		{
			high=i-1;
			i=(i)/2;
			continue;
		
		}
		
	}
	return 0;
	
}
