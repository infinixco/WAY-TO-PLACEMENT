#include<stdio.h>


void bubblesort(int arr[],int m)


{
int i,j,y;
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(arr[j]>arr[j+1])
			{
			swap(&arr[j],&arr[j+1]);
			}
		}
	}
	for (i=0;i<m;i++)
	{
		printf(" %d ", arr[i]);
			}
}
int swap(int *j,int *k)
{
	int swap;
	swap=*j;
	*j=*k;
	*k=swap;
   
}
int main()
{
int n;
	printf("enter the no. of array");
	scanf("%d",&n);
		int arr[n],a,i,b;
	printf("enter the elements of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("function call");
	bubblesort(arr,n);
	
return 0;	
}
