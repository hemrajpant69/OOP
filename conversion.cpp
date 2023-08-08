//Conversion from rectangle to polar (using conversion routine in rectangle)

#include<iostream>
#include<math.h>
using namespace std;
class polar{
	private:
		float angle;
		float radius;
		public:
			polar(){
				angle=0.0;
				radius=0.0;
			}
			polar(float r,float a){
				angle=a;
				radius=r;
			}
			void display(){
				cout<<"("<<radius<<","<<angle<<")"<<endl;
			}
};
class rectangle{
	private:
		float xco;
		float yco;
		public:
			rectangle(){
				xco=0.0;
				yco=0.0;
	}
	rectangle(float x,float y){
		xco=x;
		yco=y;
	}
	void display(){
		cout<<"("<<xco<<","<<yco<<")"<<endl;

	}
	operator polar(){
		
		float a=atan(yco/xco);
		float r=sqrt(xco*xco+yco*yco);
		return polar(r,a);
	}
};
int main(){
	rectangle r(7.004,7.5444);
	polar p;
	p=r;
	cout<<"Rectangular coordinate=";
	r.display();
	cout<<"Polar coordinates=";
	p.display();
	return 0;
}
