#include<iostream>
using namespace std;
class city
{
private:
float DistFromKtm;
char CityName[20];
public:
void getdata();
city sum(city c1,city c2);
void display();
	
};
void city::getdata()
{
	cout<<"Enter Distance(in Km) and City";
	cin>>DistFromKtm>>CityName;
}
city city::sum(city c1,city c2)
{
	city temp;
	temp.DistFromKtm=c1.DistFromKtm+c2.DistFromKtm;
	return temp;
}
void city::display()
{
	cout<<"Distance ="<<DistFromKtm;
}
int main()
{
	city c1,c2,c3;
	c1.getdata();
	c2.getdata();
	c3=c3.sum(c1,c2);
	c3.display();
	return 0;
}
