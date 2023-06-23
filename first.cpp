#include<iostream>
using namespace std;
class First
{
	private:
		int a;
		public :
			void show();
			void calculate();
			
};
void First::calculate()
{
	a=5;
}
void First::show()
{
	for(int i=0;i<a;i++)
	{
		cout<<"This My First C++ program to push in GitHub"<<endl;
	}
}
int main()
{
	First f1;
	f1.calculate();
	f1.show();
	return 0;
}
