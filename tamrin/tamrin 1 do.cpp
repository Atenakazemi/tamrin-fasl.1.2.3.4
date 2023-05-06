#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,difference,product,quotient;
	cout<<"Enter two integers:";
	cin>>a>>b;
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=a/b;
	
	cout<<"Sum="<<sum<<endl;
	cout<<"Difference="<<difference<<endl;
	cout<<"Product="<<product<<endl;
	cout<<"Quotient="<<quotient<<endl;
	
	return 0;
}
