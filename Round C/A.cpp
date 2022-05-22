#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int case_number=1;
    while(t--){
       int n;
       cin>>n;
       string old_password;
       cin>>old_password;
       bool seven_char=false;
       bool upper_char=false;
       bool lower_char=false;
       bool digit=false;
       bool special_char=false;
       for(int i=0;i<n;i++){
           char temp=old_password[i];
           if(temp>='0' && temp<='9')
           digit=true;
           if(temp>='a' && temp<='z')
           lower_char=true;
           if(temp>='A' && temp<='Z')
           upper_char=true;
           if(temp=='#' || temp=='@' || temp=='*' || temp=='&')
           special_char=true;
       }
       if(!special_char)
       old_password.push_back('#');
       if(!digit)
       old_password.push_back('1');
       if(!upper_char)
       old_password.push_back('A');
       if(!lower_char)
       old_password.push_back('z');
       while(old_password.size()<7)
       old_password.push_back('1');
       cout<<"Case #"<<case_number<<": "<<old_password<<endl;
       case_number++;
    }
    return 0;
}