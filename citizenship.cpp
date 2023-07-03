#include<iostream>
#include<string.h>
using namespace std;
class person{
	private:
		int age;
		long int citizen;
		char name[30];
		char add[30];
		public:
			person(int a,long int c,char *n,char *ad);
			void display();
			
};
person::person(int a,long int c,char *n,char *ad)
{
	strcpy(name,n);
	strcpy(add,ad);
	age=a;
	citizen=c;
}
void person::display()
{


	cout<<"Name="<<name<<endl<<"Age="<<age<<endl<<"Citizenship Number ="<<citizen<<endl<<"Address="<<add;
}
int main()
{
	int x,i;
	long int y;
	char z[50];
	char e[50];
		cout<<"Enter Name ,Age ,address and citizenship number"<<endl;
		cin>>z>>x>>e>>y;
		person p1(x,y,z,e);
		
	person p2(0,0,NULL,NULL);
	if(x>=16)
	{
		p2.display();
	}
	else{
		y=0;
	person p1(x,y,z,e);
		p2.display();
		
	}
  
	return 0;
}
