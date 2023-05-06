#include<iostream>
using namespace std;

int main()
{
	int hours,minutes,seconds;
	cout<<"Enter the number pf seconds in the football game:";
	cin>>seconds;
	hours=seconds/3600;
	seconds%=3600;
	minutes=seconds/60;
	cout<<" the football game lasted for"<<hours<<"hours,"<<minutes<<"seconds."<<endl;
	
	return 0;
	
}
