// Conversion from rectangle to polar(using conversion routine in polar)
#include<iostream>
#include<math.h>
using namespace std;
class rectangle{
	private:
		float xco;
		float yco;
		public:
			rectangle(){
				
			}
			rectangle(float x,float y){
				xco=x;
				yco=y;
				
			}
			void display(){
			cout<<"("<<xco<<","<<yco<<")"<<endl;

			}
			float getx(){
				return xco;
			}
			float gety(){
				return yco;
			}
};
class polar{
	private:
		float radius;
		float angle;
		public:
			polar(){
				
			}
			polar(float r,float a){
				radius=r;
				angle=a;
			}
			void display(){
				
		cout<<"("<<radius<<","<<angle<<")"<<endl;
		}
		polar(rectangle r){
			float x=r.getx();
			float y=r.gety();
		    float a=atan(y/x);
			angle=a;
			radius=sqrt(x*x+y*y);
		}
};
int main(){
	rectangle r(7.07107,7.07107);
	polar p;
	p=r;
	cout<<"Coordinates in rectangular=";
	r.display();
	cout<<"Coordinates in polar=";
	p.display();
	return 0;
}
