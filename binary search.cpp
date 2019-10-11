#include<iostream>
#include<conio.h>
using namespace std;
class num
{
	int a,count;
	int b[3][3];
	public:
		void in()
		{count=0;
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cin>>b[i][j];
				}
			}
		}
		void process()
		{
			cout<<"enter the no. to search  ";
			cin>>a;
	
		for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					if(a==b[i][j])
					count++;
				}
				}
				if(count>0)
				cout<<"exist "<<count<<"times ";
				else
				cout<<"does not exists";
			}
			void out2()
			{
					for(int i=2;i>0;i++)
			{
				for(int j=2;j>0;j++)
				{
					cout<<b[i][j];
				}
			}
				
			}
			
};
int main()
{
	num n1;
	n1.in();
	n1.process();
	getch();
	return 0;
}
