//Function Overloading
#include<iostream>
using namespace std;
int area(int side) //Area of Square
{
	return (side*side);
}
int area(int len,int bre)//area of rectangle
{
	return (len*bre);
}
float area(double rad)//area of circle
{
	return (3.14*rad*rad);
}
int main()
{
	cout<<"area of square="<<area(5)<<endl;
	cout<<"area of rectangle="<<area(4,6)<<endl;
	cout<<"Area of Circle="<<area(4.6)<<endl;
	return 0;
}
