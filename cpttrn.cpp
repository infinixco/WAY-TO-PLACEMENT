#include <iostream>
using namespace std;
int main(){
int t;
cin>>t;
int a,b;
for(int i=0;i<t;i++){
	cin>>a>>b;
	for(int j=0;j<a;j++){
		for(int k=0;k<b;k++){
			if(j==k){
			cout<<"*";
			}
			else if(k%2==0 && j%2==0){
				cout<<"*";
			}
			else if(k%2!=0 && j%2!=0){
				cout<<"*";
			}
			else{
				cout<<".";
			}
		}
		cout<<endl;
	}
}

			return 0;
}
