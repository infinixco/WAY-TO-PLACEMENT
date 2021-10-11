#include<iostream>
using namespace std;
int main()
{
	int a=5;
	int *p;
	p=&a;
	cout<<"VAlue of a by pointer variable :  "<<*p<<endl;
	cout<<"Address held by pointer : "<<p<<endl;
	cout<<"Adress of pointer : "<<&p<<endl;
	cout<<"Address of a : "<<&a;
	
}
