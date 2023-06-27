//Real world Problem
#include<iostream>
#include<string.h>
using namespace std;
class CarData
{
	private:
	static int car;
	static double money;
		public:
			void payingCar();
			void unPaid();
			void display();
			CarData();
		
};
CarData::CarData()
{
	car=0;
	money=0;
}
void CarData::payingCar()
{
	car++;
	money+=5;
}
void CarData::unPaid()
{
	car++;
}
void CarData::display()
{
	cout<<"Total Number of car passes ="<<car<<endl<<"Total Number of Money collected="<<money<<endl;
}
int CarData::car;
double CarData::money;
int main()
{
	CarData c[40],h;
char b[]="paid";
char f[]="unpaid";
char d[30];
int n;
cout<<"Enter total Number of car:"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<"Please Enter paid if they paid otherwise enter unpaid for "<<i<<"Car......Keep lowecase and Uppercase in mind"<<endl;
cin>>d;
if(strcmp(b,d)==0)		
{
c[i].payingCar();
}
else if(strcmp(f,d)==0)
{
	c[i].unPaid();
}
else{
	cout<<"Please Enter correct Data............"<<endl;
}
c[i].display();
}
return 0;	
}

