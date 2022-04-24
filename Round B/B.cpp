//Ony first test case passed (6 points only)
//It was giving TLE in other test case
#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(int i){
    int divisor=1;
    while(i/divisor>=10)
    divisor*=10;
    while(i){
        int leading=i/divisor;
        int trailing=i%10;
        if(leading!=trailing)
        return false;
        i=(i%divisor)/10;
        divisor=divisor/100;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    int case_count=1;
    while(t--){
        int n,count=0;
        cin>>n;
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                if(checkpalindrome(i))
                count++;
            }
        }
        if(checkpalindrome(n))
        count++;
        cout<<"Case #"<<case_count<<": "<<count<<endl;
        case_count++;
    }
    return 0;
}