#include<iostream>
using namespace std;

int main()
{
	float fahrenheit,celsius;
	cout<<" enter the temprature in fahrenheit:";
	cin>>fahrenheit;
	celsius=(fahrenheit-32) * 5/9;
	cout<< "The temperature in Celsiusis:"<<celsius<<endl;

	return 0;
}
