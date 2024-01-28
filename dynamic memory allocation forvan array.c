#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
    printf("enter how many number of elements you want to enter in array =");
    scanf("%d",&n);
	p=(int*)calloc(n,sizeof(n));
	(p==NULL)?printf("sorry,unable to allocate memory"),exit(0):printf("enter elements in an array\n");
	for(i=0;i<n;i++)
    {
    	scanf("%d",&*(p+i));
	}
	printf("\n");
	for(i=0;i<n;i++)
    {
    	printf("%d ",*(p+i));
	}
	free(p);
	return 0;
}
