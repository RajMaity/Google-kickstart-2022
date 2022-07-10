#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    int testCase=1;
    while(t--){
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        double ans=0.0000;
        sort(arr,arr+n,greater<int>());
        for(int i=0;i<m-1;i++){
            ans+=arr[i];
        }
        if((n-m+1)%2==1){
            ans=ans+arr[m-1+((n-m)/2)];
        }
        else{
            ans+=(double)(arr[m-1+((n-m)/2)]+arr[m+((n-m)/2)])/2;
        }
        cout<<"Case #"<<testCase<<": "<<fixed<<setprecision(1)<<ans<<endl;
        testCase++;
    }
    return 0;
}