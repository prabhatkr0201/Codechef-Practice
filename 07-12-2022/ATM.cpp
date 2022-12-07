//  We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.
using namespace std;
#include<bits/stdc++.h>

int main() {
    cout.precision(2);
    int w;
    float ac_bl;
    cin>>w;
    cin>>ac_bl;
    if(w%5==0 && (ac_bl-w-0.5)>=0){
        cout<<fixed<<((ac_bl-w-0.5))<<endl;
        
    }
    else{
        cout<<fixed<<ac_bl<<endl;
    }
	return 0;
}