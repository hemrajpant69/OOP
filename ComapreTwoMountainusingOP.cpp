#include<iostream>
#include<conio.h>
using namespace std;
class mountain {
int m;
public:
    void getdata(){
    cout<<"Enter Height in Meter"<<endl;
    cin>>m;
    }
    void display(){
    }
    friend void operator >(mountain m1, mountain m2){
    if(m1.m>m2.m){
        cout<<m1.m<<"Is Greater"<<endl;
    }
    else if(m2.m>m1.m){
        cout<<m2.m<<"Is greater"<<endl;
    }
    }
};
int main(){
mountain m1,m2;
cout<<"Enter Detail of First mountain"<<endl;
m1.getdata();
cout<<"Enter Detail of second mountain"<<endl;
m2.getdata();
m1>m2;
return 0;

}
