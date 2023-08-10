#include<iostream>
using namespace std;
void test(int x){
	try{
		if(x==1){
			throw x;
		}
		else if(x==0){
			throw'x';
		}
		else if(x==-1){
			throw 1.0;
		}
		cout<<"End of Try-Block"<<endl;
	}
	catch(char c){
		cout<<"Caught Character "<<endl;
	}
	catch(int i){
		cout<<"Caught Integer"<<endl;
	}
	catch(double d){
		cout<<"Caught Double"<<endl;
	}
	cout<<"End of Try and catch system"<<endl;
}
int main(){
	cout<<"testing Multiple catches"<<endl;
	cout<<"x==1"<<endl;
	test(1);
	cout<<"x==0"<<endl;
	test(0);
	cout<<"x==-1"<<endl;
	test(-1);
	return 0;
}
