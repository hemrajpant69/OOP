// Friend Function
#include<iostream>
using namespace std;
class second;//Forward Declaration
class first
{
private:
	int a;
	public:
		void setdata();
		void display();
		friend void swap(first f,second s);
};
class second
{
	private:
		int b;
		public:
			void setdata();
			void display();
			friend void swap(first f,second s);
};
void first::setdata()
{
	cout<<"enter first Number"<<endl;
	cin>>a;
	
}
void second::setdata()
{
	cout<<"Enter second number:"<<endl;
	cin>>b;
}
void first::display()
{
	cout<<"value of First class is:"<<a<<endl;
	
}
void second::display()
{
	cout<<"value of second class is :"<<b<<endl;
}
void swap(first f,second s)
{
	int temp;
	temp=f.a;
	f.a=s.b;
	s.b=temp;
	cout<<"value of First class is:"<<f.a<<endl;
	cout<<"Value of second Class is:"<<s.b<<endl;
}
int main()
{
	first f1;
	second s1;
	f1.setdata();
	s1.setdata();
	f1.display();
	s1.display();
	swap(f1,s1);
	return 0;
}
