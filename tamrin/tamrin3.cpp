#include <iostream>
using namespace std;
void drawCircle()
{
	cout<<"    ***  "  <<endl;
	cout<<"  *     * " <<endl;
	cout<<" *        *"<<endl;
	cout<<" *        *"<<endl;
	cout<<"  *      *" <<endl;
	cout<<"    ***   " <<endl;
	
}
void drawRectangle()
{
	cout<<" ******* " <<endl;
	cout<<" *     * " <<endl;
	cout<<" *     * " <<endl;
	cout<<" *     * " <<endl;
	cout<<" ******* " <<endl;
	
}
void drawTriangle()
{
	cout<<"    *     " <<endl;
	cout<<"  *   *   " <<endl;
	cout<<" *     *  " <<endl;
	cout<<"*       * " <<endl;
	cout<<"********* " <<endl;
	
}
int main()
{
	drawCircle();
	drawTriangle();
	drawRectangle();
	cout<<endl<<endl;
	drawTriangle();
	drawCircle();
	drawRectangle();
	
	return 0;
	
}
