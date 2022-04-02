#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int k=1;
	while(t--){
		string s,p;
		cin>>s>>p;
		long long int len_s=s.size();
		long long int len_p=p.size();
		long long int count=0;
		long long int i=0,j=0;
		while(j<len_p && i<len_s){
			if(s[i]==p[j]){
				i++;
			}
			else{
				count++;
			}
			j++;
		}
		if(i==len_s){
			cout<<"Case #"<<k<<": "<<count+len_p-j<<endl;
		}
		else{
			cout<<"Case #"<<k<<": "<<"IMPOSSIBLE"<<endl;
		}
		k++;
	}
	return 0;
}