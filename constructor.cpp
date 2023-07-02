//constructor Overloading
#include<iostream>
using namespace std;
class Rational
{
	private:
		int num;
		int denum;
		public:
			Rational();
			Rational(int x,int y);
			Rational(Rational &r);
			void display();
			
};
Rational::Rational()
{
	num=0;
	denum=0;
}
Rational::Rational(int x,int y)
{
	num=1;
	denum=y;
}
Rational::Rational(Rational &r)
{
	num=r.num;
	denum=r.denum;
	
}
void Rational::display()
{
	cout<<"num="<<num;
	cout<<"Denum="<<denum;
	
}
int main()
{
	Rational p;
	Rational R(100,50);
	Rational s(R);
	p.display();
	R.display();
	s.display();
	return 0;
}
