// Class Template With multiple parameters
#include<iostream>
using namespace std;
template<class T1,class T2>
class calculate{
	private:
		T1 a;
		T2 b,s;
		public:
			calculate(){
				
			}
			calculate(T1 x, T2 y)
			{
				a=x;
				b=y;
			}
			void add(){
				s=a+b;
				cout<<"Sum="<<s;
			}
			
};
int main(){
	calculate<int,int> c1(20,20);
	calculate<float,float> c2(20.5,20.5);
	calculate<int,float> c3(20,20.5);
	cout<<"Calculation of two integers=";
	c1.add();
		cout<<"Calculation of two floats=";
	c2.add();
		cout<<"Calculation of  integer and float=";
	c3.add();
	return 0;
}
