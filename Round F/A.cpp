#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int k=1;
	while(t--){
			
			//cout<<"Case #"<<k<<": "<<ans<<endl;
      int n;
      cin>>n;
      string color;
      int durability,identifier;
      vector<pair<string,int> >vec1;
      vector<pair<int,int> >vec2;
      for(int i=0;i<n;i++){
        cin>>color>>durability>>identifier;
        vec1.push_back(make_pair(color,identifier));
        vec2.push_back(make_pair(durability,identifier));
      }
      sort(vec1.begin(),vec1.end());
      sort(vec2.begin(),vec2.end());
      int count=0;
      for(int i=0;i<n;i++){
        if(vec1[i].second==vec2[i].second)
        count++;
      }
      cout<<"Case #"<<k<<": "<<count<<endl;
		k++;
	}
	return 0;
}