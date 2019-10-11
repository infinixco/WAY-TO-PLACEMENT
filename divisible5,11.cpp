#include<stdio.h>
main()
{
	int a;
	printf("enter ur no.");
	scanf("%d",&a);
	if(a%5==0)
{
		printf("no. is divisible by 5");
	if(a%11==0)
	printf("no. is divisible by 11 also");

	else
	printf("no. is not divisible by 11");
	
}
	else
	printf("no. is useless");
	return 0;
}
