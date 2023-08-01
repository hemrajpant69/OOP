#include<iostream>
using namespace std;
class memory{
	int mb;
	int kb;
	int b;
	public:
		memory(){
			
		}
		memory(long int m){
			
			int rem;
			mb=m/(1024*1024);
			rem=m%(1024*1024);
			kb=rem/1024;
			b=rem%1024;
		}
		void display(){
			
			cout<<mb<<"Megabyte "<<endl<<kb<<"Kilobyte"<<endl<<b<<"Byte"<<endl;
		}
};
int main(){
	memory m1;
	long int m=1087665;
	m1=m;
	m1.display();
	return 0;
}
