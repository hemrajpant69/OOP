// Conversion runtime in destination class.... conversion from polar to rectangle(using conversion runtime in polar)
#include<iostream>
#include<math.h>
using namespace std;
class polar{
	private:
		float angle;
		float radius;
		public:
			polar(){
				
			}
			polar (float r,float a){
				radius=r;
				angle=a;
			}
			void display(){
				
			cout<<"("<<radius<<","<<angle<<")"<<endl;

			}
			float getr(){
				return radius;
				
			}
			float geta(){
				return angle;
			}
};
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
			rectangle (polar p){
				float r=p.getr();
				float a=p.geta();
				xco=r*cos(a);
				yco=r*sin(a);
			}
};
int main(){
	polar p(10.0,0.785398);
	rectangle r;
	r=p;
	cout<<"Polar coordinates=";
	p.display();
	cout<<"Rectangular coordinates=";
	r.display();
	return 0;
}
