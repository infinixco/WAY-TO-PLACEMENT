#include<iostream>
#include<string.h>
using namespace std;
class Bank
 {
 	int an;//acount no
 	char ahn[25],add[90];//acount holder name and address
 	char at[35];//acount type
 	float ca,da,pin;
 	public: void input()
 	{
 		cout<<"Enter Account no : "<<endl;
 		cin>>an;
 		cout<<"Enter pin : "<<endl;
 		cin>>pin;
 		cin.ignore();
 		cout<<"Enter account holder name : "<<endl;
 		cin.getline(ahn,25);
 		cin.ignore();
 		cout<<"Enter The address of custmor : "<<endl;
 		cin.getline(add,90);
 		cout<<"Enter account type  : "<<endl;
 		cin>>at;
 		cout<<"Enter credit amount : "<<endl;
 		cin>>ca;
 		cout<<"Enter debit amount : "<<endl;
 		cin>>da;	
	 }
	 friend void atm(Bank &);
};
void atm(Bank &b)
{
	int da;
	cout<<"Enter new pin : "<<endl;
	cin>>b.pin;
	cout<<"Enter amount to be detucetd : "<<endl;
	cin>>da;
	cout<<" ******************** Mini statement as ***************** "<<endl;
	cout<<b.ca-b.da;
	
}
int main()
{
	Bank b;
	b.input();
	atm(b);
	return 0;
	}
	

