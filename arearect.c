#include<stdio.h>
int area(int,int);
int main()
{
	int a,b,c;
	printf("enter the lenght and breadth of rectangl\n");
	scanf("%d%d",&a,&b);
	c=area(a,b);
	printf("area of ractangle is %d\n",c);
	return 0;
}
int area(int l,int b)
{
	int a;
	a=l*b;
	return a;
}

