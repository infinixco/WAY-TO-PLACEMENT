#include<stdio.h>
int main()
{
	int arr[5][5],m,n,i,sum=0,j;
	printf("enter the order if matrix      ");
	scanf("%d%d",&n,&m);
	printf("enter the elements of matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				sum=sum+arr[i][j];
			}
		}
	}
	printf("sum of diagonal is %d",sum);
	return 0;
}
