#include<iostream>
using namespace std;

double calulatevoloome(double length,double width,double height)
{
	double volome =length*width*height;
	
	return volome;

}
double calculatesufracearea(double length,double width,double height)


{
	double surfaceArea=2*(length*width+width*height+height*length);
	
	return surfaceArea;
	
}
    int main()
	
{
	double length,width,height;
	
	
	cout<<"Enter the length of the box:";
	cin>>length;
	cout<<"Enter the width of the box:";
	cin>>width;
	cout<<"Enter the height of yhe box:";
	cin>>height;

    double volumecalculateVolume =length;width;height;
	double surfaceArea,calculateSurfaceArea=length;width;height;
	
	cout<<"The box occupies a volime of"<<"volome"<<"cubic units."<<endl;
	cout<<"The box requires"<<"surfaaceArea"<<"square units of wrapping paper."<<endl;
	
	return 0;
	
}
