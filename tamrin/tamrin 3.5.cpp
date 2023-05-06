#include<iostream>
using namespace std;

double calculatevolume (double length,double width, double height)
{
	double volume =length * width * height;
	
	return volume;
	
}
double calculateSurfacearea(double length,double width,double height)
{
	double surfacearea=2*(length*width+width*height+height*length);
	
	return surfacearea;

}
int main()
{
	double length,width,height;
	cout<<"enter the length of the box:";
	cin>>length;
	cout<<"enter the width of the box:";
	cin>>width;
	cout<<"enter the height of the box:";
	cin>>height;
	
	double volome =calculatevolome (length,width,height);
	double surface area=
	calculatesurfacearea(length,width,height);
	
	
	cout<<"the box occupies avolome of"<<volome<<"cubic units."<<'end';
	cout<<"the box requires"<<surfacearea<<"square units of wrapping paper."<<'end';
	
	return 0;
	
}
