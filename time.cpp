// Returning Obeject as argument
#include<iostream>
using namespace std;
class Time
{
	private:
		int hour;
		int min;
		public:
			void getTime(int h,int m)
			{
				hour=h;
				min=m;
			}
			void displayTime()
			{
				cout<<"Hour="<<hour<<endl;
				cout<<"Minute="<<min<<endl;
			}
			Time addTime(Time t1,Time t2);
};
Time Time::addTime(Time t1,Time t2)
{
Time temp;
temp.min=t1.min+t2.min;
temp.hour=temp.min/60;
temp.min=temp.min%60;
temp.hour+=t1.hour+t2.hour;
return temp;	
}
int main()
{
	Time t1,t2,t3;
	t1.getTime(2,44);
	t2.getTime(5,69);
	t3=t3.addTime(t1,t2);
	t3.displayTime();
	return 0;
}
