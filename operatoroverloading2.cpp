#include<iostream>
using namespace std;
class time{
	private:
		int hour,min,sec;
		public:
			void getdata(){
				cout<<"Enter Hour min and sec"<<endl;
				cin>>hour>>min>>sec;
			}
			friend void operator ==(time t1,time t2)
			{
	if(t1.hour>=t2.hour){
		if(t1.min>=t2.min){
			 if(t1.sec>=t2.sec){
				 if(t1.sec>t2.sec){
				 	t1.min+=t1.sec/60;
			        t1.sec= t1.sec%60;
			        t1.hour+=t1.min/60;
			        t1.min=t1.min%60;
				 	cout<<(t1.hour)<<".hrs   "<<(t1.min)<<".min   "<<(t1.sec)<<".sec   "<<"Is Greater";
				 }
				 else if(t1.sec=t2.sec){
				 	t1.min+=t1.sec/60;
			        t1.sec= t1.sec%60;
			        t1.hour+=t1.min/60;
			        t1.min=t1.min%60;
				 	cout<<(t1.hour)<<".hrs   "<<(t1.min)<<".min   "<<(t1.sec)<<".sec   "<<" Are equal";
				 }
				 else{
				 	t2.min+=t2.sec/60;
		          	t2.sec= t2.sec%60;
			        t2.hour+=t2.min/60;
		          	t2.min=t2.min%60;
				 	cout<<(t2.hour)<<".hrs   "<<(t2.min)<<".min   "<<(t2.sec)<<".sec   "<<"Is Greater";
				 }
			}
			else{
					t2.min+=t2.sec/60;
			        t2.sec= t2.sec%60;
			         t2.hour+=t2.min/60;
			         t2.min=t2.min%60;
				cout<<(t2.hour)<<".hrs   "<<(t2.min)<<".min   "<<(t2.sec)<<".sec   "<<"Is Greater";
			}
		}
	}
	else{
			
			t2.min+=t2.sec/60;
			t2.sec= t2.sec%60;
			t2.hour+=t2.min/60;
			t2.min=t2.min%60;
			
		cout<<(t2.hour)<<".hrs   "<<(t2.min)<<".min   "<<(t2.sec)<<".sec   "<<"Is Greater";
	}
}
};
int main(){
	time t1,t2;
	t1.getdata();
	t2.getdata();
	t1==t2;
	return 0;
}
