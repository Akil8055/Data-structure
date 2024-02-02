#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements you want to enter in array =");
	scanf("%d",&n);
	int a[n],i,sum=0;
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	sum+=a[i];
	printf("sum of all elements in an array =%d",sum);
	return 0;
}
	
