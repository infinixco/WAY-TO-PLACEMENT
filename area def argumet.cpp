#include<iostream>
using namespace std;
class area {
	int l,b;
	public : void aor(int l,int b=5)
{
	cout<<l*b;
}area()
{
	cout<<"costructor ";
}
};
int main()
{
	int l;
	cout<<"Enter length : "<<endl;
	cin>>l;
	area a;
	a.aor(l);
	return 0;
}
