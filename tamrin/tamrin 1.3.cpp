#include<iostream>
using namespace std;
int main ()
{
	int age,months,days;
	cout<<" Enter your age in years:";
	cin>>age;
	months = age *19;
	days=age *365;
	cout<<" You have lived for"<<months<<"months and "<<days<<"days."<<endl;
	
	return 0;
}
