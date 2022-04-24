//Only sample case was getting passed
//Not correct solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int case_count=1;
    while(t--){
        double R,A,B;
		cin>>R>>A>>B;
		//static double pi=3.14;
		double area=0.00;
		while(R){
			area=area+(M_PI*R*R);
			int temp_1=int(R*A);
			if(temp_1==0)
			break;
			else
			R=R*A;
			area=area+(M_PI*R*R);
			int temp_2=int(R/B);
			if(temp_2==0)
			break;
			else
			R=R/B;
		}
        cout<<"Case #"<<case_count<<": "<<area<<endl;
        case_count++;
    }
    return 0;
}