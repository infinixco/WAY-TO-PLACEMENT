#include <bits/stdc++.h>
using namespace std; 
int main(){
	int n , br;
	cin>>n;
	br=n/2;
	for (int i=0;i<n;i++){
		for (int j=0;j<br;j++) cout<<'*';
		for (int j=0;j<n-2*br;j++) cout<<'D';
		for (int j=0;j<br;j++) cout<<'*';
		if (i<n/2) br--;
		else br++;
		cout<<'\n';
	}
	
	return 0;
}
