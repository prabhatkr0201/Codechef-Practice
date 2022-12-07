#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
	    char a;
	    cin>>a;
	    if(a=='b' || a=='B')
	    cout<<"BattleShip"<<"\n";
	    if(a=='c' || a=='C')
	    cout<<"Cruiser"<<"\n";
	    if(a=='d' || a=='D')
	    cout<<"Destroyer"<<"\n";
	    if(a=='f' || a=='F')
	    cout<<"Frigate"<<"\n";
	}
	return 0;
}
