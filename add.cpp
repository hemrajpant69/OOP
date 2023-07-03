#include<iostream>
using namespace std;
class third;
class second;
class first
{
private:
int a;
public :
	void getdata();
friend void add(first f,second s,third t);	
};
class second{
	private: 
	int b;
	public:
	void getdata();
	friend void add(first f,second s,third t);
};
class third{
	private:
		int c;
		public:
			void getdata();
			friend void add(first f,second s,third t);			
};
void first::getdata()
{
	cout<<"Enter First Number"<<endl;
	cin>>a;
}
void second::getdata()
{
	cout<<"Enter Second Number"<<endl;
	cin>>b;
}
void third::getdata()
{
	cout<<"Enter Third Number"<<endl;
	cin>>c;
}
void add(first f,second s,third t)
{
	int sum=f.a+s.b+t.c;
	cout<<"The Sum ="<<sum;
}
int main()
{
	first f;
	second s;
	third t;
	f.getdata();
	s.getdata();
	t.getdata();
	add(f,s,t);
	return 0;
}
