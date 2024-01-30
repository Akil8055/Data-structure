#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("enter number of elements you want to enter in array = ");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements\n");
	for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int *p=&a;
    for(i=0;i<n;i++)
    sum=sum+*(p+i);
    printf("sum of elements in an array =%d",sum);
    return 0;
	
}
