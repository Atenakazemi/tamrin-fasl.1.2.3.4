#include<iostream>
using namespace std;
 void separateDecimal(double num)
 {
   int integerPart=(int)num;
   double decimalpart=num-integerPart;
   cout<<"integer part:"<<"integerpart"<<endl;
   cout<<"Decimal part:"<<"desimalpart"<<endl;
}

 int main()
{
	double average;
	cout<<"Enter your average:";
	cin>>average;
	separateDecimal(average);
	
	return 0;
}
