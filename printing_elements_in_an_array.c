#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("enter number of elements you want to enter in array =");
	scanf("%d",&n);
	int a[n],i;
	printf("enter elements in array\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("elements in array are\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
	return 0;
}
