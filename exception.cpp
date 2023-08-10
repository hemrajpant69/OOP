#include<iostream>
using namespace std;
int main(){
	int a,b,x;
	cout<<"Enter Value of x and y"<<endl;
	cin>>a>>b;
	x=a-b;
	try{
		if(x!=0){
			cout<<"Value of (a/x)="<<(a/x);
		}
		else{
			throw (x);
		}
	}
	catch(int i){
		cout<<"Exceptiom Caught:Divide by zero"<<endl;
	}
	cout<<"End";
	return 0;
}
