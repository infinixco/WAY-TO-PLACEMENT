#include <iostream>
#include <cmath>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
float a,b,c,d,k,ans1,ans2;
int sum;
cin>>a>>b>>c>>d>>k;
ans1=ceil(a/c);
ans2=ceil(b/d);
sum=ans1+ans2;
if(sum<=k){
	cout<<ans1<<" "<<ans2<<endl;
}
else{
	cout<<"-1"<<endl;
}

}


	return 0;
}
