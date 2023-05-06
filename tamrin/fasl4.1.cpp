#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	string blue,gold,green,pink;
	cin>>blue>>gold>>green>>pink;
	
	cout<<"Ascending order:"<<'end';
	string arr[4]={blue,gold,green,pink};
	'sort'[arr,arr+4];

	for(int i=0;i<4;i++)
	{
		cout<<arr[i]<<'end';
		
	}
	cout<<"Descending order:"<<'end';
	'sort'["arr,arr+4,greater<string>"];
	for(int i=0; i<4;i++)
	{
		cout<<arr[i]<<'end';
		
	}
	return 0;
}
