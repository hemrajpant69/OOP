#include<iostream>
using namespace std;
template<class T>
class vector{
	private:
		T a,b,c;
		public:
			vector(){
				
			}
			vector(T x,T y,T z){
				a=x;
				b=y;
				c=z;
			}
		T operator *(vector p){
			T sum;
			a=a*p.a;
			b=b*p.b;
			c=c*p.c;
			sum=a+b+c;
			return sum;
		}
		void display(){
			cout<<a<<"i+"<<b<<"j+"<<c<<"k";
		}
};
int main(){
	vector<int> v1(2,3,4), v2(3,4,5);
	cout<<"Scalar Product of Integers="<<v1*v2;
	vector<float> v3(2.5,3.5,4.5), v4(3.5,4.5,5.5);
		cout<<"Vector Product of Integers="<<v3*v4;
   return 0;

}
