#include <iostream>
using namespace std;
class complex{
	private:
		int img,real;
		public:
			void getdata(){
				cout<<"Enter Real and Imaginary part of a complex number:"<<endl;
				cin>>real>>img;
			}
			void display(){
				cout<<real<<"+"<<img<<"i"<<endl;
			}
			friend complex operator +(complex c1,complex c2);
			friend complex operator -(complex c1,complex c2);
};
complex operator +(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}
complex operator-(complex c1,complex c2){
	complex temp;
	temp.real=c1.real-c2.real;
	temp.img=c1.img-c2.img;
	return temp;
}
int main(){
	complex c1,c2,c3,c4;
	c1.getdata();
	c2.getdata();
	c3=c1+c2;
	cout<<"Addition of two complex number=";
	c3.display();
	c4=c1-c2;
	cout<<"Subtraction of two complex=";
	c4.display();
	return 0;
}
