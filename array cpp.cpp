#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
float p[3];
int x;
float *a;
for(x=0;x<3;x++)
{
	cin>>p[x];
}
a=p;
	for(x=0;x<3;x++)
	{
		cout<<a[x]<<endl;
	}
	getch();
}
