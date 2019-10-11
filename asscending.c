#include<stdio.h>
int main()
{
	int array[10],i,j,swap;
	printf("enter the 10 no.");
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;++j)
		{
			if(array[i]>array[j])
			{
				swap=array[i];
				array[i]=array[j];
				array[j]=swap;
			}
			else
			continue;
		}
	}
	for(i=0;i<10;i++)
	printf("%d\n",array[i]);
	
	return 0;
}
