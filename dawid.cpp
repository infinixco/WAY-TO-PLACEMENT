#include <iostream>
using namespace std;
int calu(int a,int b,int c,int d){
	int sum = a+b+c+d;
	if(sum-a==a ||sum-b==b||sum-c==c||sum-d==d||a+b==c+d||a+c==b+d||a+d==b+c){
	cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
calu(a,b,c,d);
	return 0;
}
