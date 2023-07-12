#include<iostream>
using namespace std;
class person{
	protected:
		int age;
		char name[50];
		public:
			void getdata(){
				cout<<"Enter name and age"<<endl;
				cin>>name>>age;
			}
};
class test:virtual public person{
	protected:int sub1,sub2;
	public: 
	void get(){
		cout<<"Enter marks in 2 subjects"<<endl;
		cin>>sub1>>sub2;
	}
};
class sport:virtual public person{
	protected:
		int score;
		public :
			getscore()
			{
				cout<<"Enter score"<<endl;
				cin>>score;
			}
};
class result:public test,public sport{
	private:
		int total;
		public:
			void calculate(){
				total=sub1+sub2+score;
				cout<<"Name="<<name<<endl<<"Age="<<age<<endl<<"Result="<<total;
			}
};
int main()
{
	result r;
	r.getdata();
	r.getscore();
	r.get();
	r.calculate();
	return 0;
}
