#include<iostream>
#include<conio.h>
using namespace std;
class acc
{
	int accno;
	char name[10];
	int balance;
	public:
		void in()
		{
			cin>>accno>>name>>balance;
		}
		void friend process(acc a1);
		
};
void process(acc a2)
		{
			cout<<a2.accno<<a2.name<<a2.balance;
		}
int main()
{
	acc aa;
	aa.in();
	process(aa);
	getch();
}
