// Friend Function
#include<iostream>
using namespace std;
class highest2; //forward declaration
class highest1
{
private :
int a;
public :
void setvalue1();
friend void displayhigh(highest1 h1,highest2 h2);
void display();	
};
class highest2
{
private:
int b;
public:
friend void displayhigh(highest1 h1,highest2 h2);
void display();	
void setvalue2();
};
void highest1::setvalue1()
{
	cout<<"Enter a Value"<<endl;
	cin>>a;
}
void highest2::setvalue2()
{
	cout<<"Enter a Value"<<endl;
	cin>>b;
}
void displayhigh(highest1 h1,highest2 h2)
{
	if(h1.a>h2.b)
	{
		cout<<"Highest="<<h1.a<<endl;
		
	}
	else
	{
		cout<<"Highest="<<h2.b<<endl;
	}
}
int main()
{
	highest1 h;
	highest2 h3;
	h.setvalue1();
	h3.setvalue2();
	displayhigh(h,h3);
	return 0;
}
