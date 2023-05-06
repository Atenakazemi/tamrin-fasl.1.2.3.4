#include<iostream>
using namespace std;
float gross_pay(float hours, float rate)
{
	if(hours>40)
	{ return (40*rate)+((hours-40)*rate*1.5);
	}
	
}
float net_pay(float gross)
{
	if (gross>10000000)
	{
		return gross - 1500000;
	}else{
		return gross;
	
	}
}

int main()

{
	float hours, rate;
	cout<<"Enter  hours workes:";
	cin>>hours;
	cout<<"Enter hourly rate:";
	cin>>rate;
	
	float total_gross_pay=gross_pay (hours ,rate);
	float total_net_pay=net_pay (total_gross_pay);
	
	cout<<" Gross pay for the week:"<<total_gross_pay<<endl;
	cout<<"Net pay for the week:"<<total_net_pay<<endl;
	
	return 0;
	
}

