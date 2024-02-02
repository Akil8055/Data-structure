#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements you want to enter in array =");
	scanf("%d",&n);
	int a[n],i,count=0,j;
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("all unique elements in an array \n");
	for(i=0;i<n;i++)
	{      
	      count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]!=a[j]&&i!=j)
			{
				count++;
			}
		}
		if(count==n-1)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
	
	
	
	
	
	
	
	
