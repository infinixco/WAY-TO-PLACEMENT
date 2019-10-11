#include<iostream>
#include<conio.h>
using namespace std;
class integer
{
	int a,b,c;
	public:
		void name( int a,int b=10,int c=5);//default argument
};
void integer::name(int a,int b,int c)//non inline function
{
	cout<<a+b+c<<endl;
}
int main()
{
	integer n1;
	int x,y,z;
	cin>>x>>y;
	n1.name(4,5,5);
	cin>>z;
	n1.name(x,y,z);
	n1.name(4,5);
	getch();
}

