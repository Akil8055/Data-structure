#include<stdio.h>
int main()
{
	int a[5][5]={{0,0,2,3,0},{7,0,1,0,3},{0,0,3,4,0},{0,0,0,0,5},{6,0,0,0,0}};
	int b[5][5]={{1,0,0,0,6},{2,3,0,0,5},{0,0,0,5,3},{9,8,7,6,5},{0,0,1,2,3}};
	int i,j,s1=0,s2=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]!=0)
			s1++;
			if(b[i][j]!=0)
			s2++;
		}
	}
	
	int ak[3][s1],bk[3][s2],p=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]!=0)
			{
				ak[0][p]=i;
				ak[1][p]=j;
				ak[2][p]=a[i][j];
				p++;
			}
		}
	}p=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(b[i][j]!=0)
			{
				bk[0][p]=i;
				bk[1][p]=j;
				bk[2][p]=b[i][j];
				p++;
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<s1;j++)
			printf("%d ",ak[i][j]);
			printf("\n");
		}
		for(i=0;i<3;i++)
	{
		for(j=0;j<s2;j++)
			printf("%d ",bk[i][j]);
			printf("\n");
		} 
		int x;
		x=s1+s2;
		int c[3][x],k=0,r=0;
		j=0;
	for(;j<s1&&k<s2;)
	{
		if(ak[0][j]==bk[0][k]&&ak[1][j]==bk[1][k])
		{
			c[0][r]=ak[0][j];
			c[1][r]=ak[1][j];
			c[2][r]=ak[2][j]+bk[2][k];
			r++;
			j++;
			k++;
			
		}
		else if(ak[0][j]==bk[0][k]&&ak[1][j]<bk[1][k])
		{
			c[0][r]=ak[0][j];
			c[1][r]=ak[1][j];
			c[2][r]=ak[2][j];
			r++;
			j++;
		}
		else if(ak[0][j]==bk[0][k]&&ak[1][j]>bk[1][k])
		{
			c[0][r]=bk[0][k];
			c[1][r]=bk[1][k];
			c[2][r]=bk[2][k];
			r++;
			k++;
			
		}
		else if(ak[0][j]<b[0][k])
		{
		    c[0][r]=ak[0][j];
			c[1][r]=ak[1][j];
			c[2][r]=ak[2][j];
			r++;
			j++;	
		}
		else
		{
			c[0][r]=bk[0][k];
			c[1][r]=bk[1][k];
			c[2][r]=bk[2][k];
			r++;
			k++;
			
		}
	}
	for(;k<s2;)
	{
		c[0][r]=bk[0][k];
			c[1][r]=bk[1][k];
			c[2][r]=bk[2][k];
			r++;
			k++;
	}	
		for(;j<s1;)
	{
		c[0][r]=ak[0][j];
			c[1][r]=ak[1][j];
			c[2][r]=ak[2][j];
			r++;
			j++;
	}
	printf("Addition of sparse matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<r;j++)
			printf("%d ",c[i][j]);
			printf("\n");
		}
	return 0;	
}
