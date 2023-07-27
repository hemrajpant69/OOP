#include<iostream>
using namespace std;
class B{
	public:
		void display(){
			cout<<"Display base"<<endl;
		}
		virtual void show(){
			cout<<"Show base"<<endl;
		}
};
class D:public B{
	public:
		void display(){
			cout<<"Display derived"<<endl;
			
		}
		void show(){
			cout<<"Show Derived"<<endl;
		}
		
};
int main(){
	B b1;
	B *bptr;
	D d1;
	cout<<"bptr points to base"<<endl;
	bptr=&b1;
	bptr->display();
	bptr->show();
	cout<<"bptr points to derived"<<endl;
	bptr=&d1;
	bptr->display();
	bptr->show();
	return 0;
}
