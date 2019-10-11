#include<iostream>
using namespace std;
void area(float);
void area(int,int);
void area(int,float);
int main()
{
	float r,B;
	int l,b,h;
	cout<<"Enter the radius of circle and BAse of triangle  :  "<<endl;
	cin>>r>>B;
	cout<<"Enter length and breadth and hight :  "<<endl;
	cin>>l>>b>>h;
	area(r);
	area(l,b);
	area(B,b);
	return 0;
}
void area(float r)
{
	cout<<"FUNCTION OVERLOADING"<<endl;
	cout<<(3.14*r*r)<<"  is the area of circle "<<endl;
	
	
}
void area(int l,int b)
{
	cout<<(l*b)<<" IS the area of reactangle "<<endl;
}
void area(float B,int b)
{
	cout<<(0.5*B*b)<< "  is area of triangle ";
	
}
