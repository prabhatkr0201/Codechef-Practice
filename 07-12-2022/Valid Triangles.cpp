#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int sum=0;
	    sum=a+b+c;
	    if(sum==180)
	    {
	        cout<<"YES"<<"\n";
	    }
	    else
	    {
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
