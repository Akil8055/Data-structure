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
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]==a[j]&&i!=j)
			{
				count++;
				break;
			}
		}
	}
	printf("number of duplicate elements in an array =%d",count);
	return 0;
}
