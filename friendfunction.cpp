#include<iostream>
using namespace std;
class First{
	private:
		int a,b;
		public:
			void get();
			friend void calculate(First f);
};
void First::get()
{
	cout<<"Enter Two Numbers"<<endl;
	cin>>a>>b;
}
void calculate(First f)
{
	if(f.a>f.b)
	{
		cout<<"Max is "<<f.a<<endl;

	}
	else{
		cout<<"max is "<<f.b<<endl;
		
	}
	
}
int main()
{
	First f1;
	f1.get();
	calculate(f1);
	return 0;
}

