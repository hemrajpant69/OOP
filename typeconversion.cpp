#include<iostream>
using namespace std;
class type{
    int h,m,s;
public:
    type(){
    }
    type(int sec){
        m=sec/60;
        sec=sec%60;
        h=m/60;
        m=m%60;
        s=sec;
    }
    void display(){
    cout<<h<<".hrs \t"<<m<<".min \t"<<s<<"sec";
    }

};
int main(){
int sec;
sec=60*60;
type t;
t=sec;
t.display();
}
