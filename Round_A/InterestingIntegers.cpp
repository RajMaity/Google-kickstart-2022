#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int k=1;
	while(t--){
		int l,r;
		cin>>l>>r;
		int count=0;
		for(int i=l;i<=r;i++){
			int sum,product,n=i;
			for(sum=0,product=1;n>0;n/=10){
				sum+=n%10;
				product*=n%10;
			}
			if(product%sum==0){
			count++;
		}
		}
		cout<<"Case #"<<k<<": "<<count<<endl;
		k++;
	}
	return 0;
}