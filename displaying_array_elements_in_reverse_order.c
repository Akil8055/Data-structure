#include<stdio.h>
int main()
{
	int n;
	printf("enter number of elements you want to enter in array =");
	scanf("%d",&n);
	int a[n],i;
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
      printf("original order \n");
      for(i=0;i<n;i++)
      printf("%d ",a[i]);
	printf("\nreverse order\n");
      for(i=n-1;i>=0;i--)
      printf("%d ",a[i]);
	return 0;
}
