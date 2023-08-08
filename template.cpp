// Class template
#include<iostream>
using namespace std;
template<class T>
class sample{
	private:
		T a,b,s;
		public:
			sample(){
				
			}
			sample(T x,T y){
				a=x;
				b=y;
				
			}
			void sum(){
				s=a+b;
				cout<<"Sum="<<s;
			}
};
int main(){
	sample<int> s1(20,20);
	sample<float> s2(20.2,20.2);
	cout<<"Sum of Integers=";
	s1.sum();
	cout<<"Sum of Floats=";
	s2.sum();
	return 0;
}
