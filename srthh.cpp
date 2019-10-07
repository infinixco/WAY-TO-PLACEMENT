#include <iostream>
#include <string>
using namespace std;
int main(){
	int t,l;
	cin>>t;
	for(int i=0;i<t;i++){
		string s;
		cin>>s;
		l=s.length();
		for(int j=0;j<l/2;j++){
			if(j%2==0){
				cout<<s[j];
			}
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
