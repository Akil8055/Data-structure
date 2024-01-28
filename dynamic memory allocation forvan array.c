#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,r,c,i,j,h=0;
    printf("Enter number of rows and coloums of 2D Array =");
    scanf("%d%d",&r,&c);
	p=(int*)calloc(r*c,sizeof(r));
	(p==NULL)?printf("sorry,unable to allocate memory"),exit(0):printf("enter elements in an array\n");
	for(i=0;i<r*c;i++)
    {
    	
    	scanf("%d",&*(p+i));
	}
	printf("\n");
	for(i=0;i<r;i++)
    {
    	for(j=0;j<c;j++,h++)
    	{
    	 printf("%d ",*(p+h));
    	 
    }printf("\n");
	}
	free(p);
	return 0;
}
