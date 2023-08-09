//Function Template
#include<iostream>
using namespace std;
template<class T>
void calculate(T a,T b){
	T sum;
	sum=a+b;
	cout<<sum;
}
int main(){
	int i1=2,i2=4;
	float f1=3.3,f2=4.4;
	cout<<"Sum of two integers=";
	calculate(i1,i2);
	cout<<"Sum of two floats=";
	calculate(f1,f2);
	return 0;
}
