#include<iostream>
#include<conio.h>
using namespace std;
class marks
{
	public:
		int a,b,c,d,e;
		float f;
		void in()
		{
			cin>>a>>b>>c>>d>>e;
		}
		float avg()
		{
			return (a+b+c+d+e)/5;
		
		}

};
int main()
{ int z;
	class marks m1;
	m1.in();
	z=m1.avg();
	cout<<z;
	getch();
	return 0;
}
