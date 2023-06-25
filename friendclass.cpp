//friend class
#include<iostream>
using namespace std;
class abc;
class xyz{
	private:
		int a,b;
		public:
			void setdata()
			{
			
			cout<<"Enter Two Numbers:"<<endl;
			cin>>a>>b;
			}
			friend class abc;
};
class abc{
	public:
		void calculate(xyz x)
		{
			x.setdata();
			if(x.a>x.b)
			{
				cout<<"The Largest Number is "<<x.a<<endl;
				
			}
			else{
				cout<<"The Largest Number is "<<x.b<<endl;
			}
		}
};
int main()
{
	abc obj1;
	xyz obj2;
	obj1.calculate(obj2);
	return 0;
}
