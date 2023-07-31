#include<iostream>
using namespace std;
class student{
public:
    char name[40];
    int dob;
    int roll;
    void getdata(){
    cout<<"Enter Name dob and roll"<<endl;
    cin>>name>>dob>>roll;
    }
    void discount(){
        cout<<"Discount Successfull!!!!"<<endl;

    }
    virtual void dispresult()
    {
        cout<<"name="<<name<<endl<<"DOB="<<dob<<endl<<"roll="<<roll;
    }
};
class pg:public student{
    public:

    void dispresult()
    {
        cout<<"name="<<name<<endl<<"DOB="<<dob<<endl<<"roll="<<roll;
    }

};
class ug: public student{
public:
    void dispresult()
    {
        cout<<"name="<<name<<endl<<"DOB="<<dob<<endl<<"roll="<<roll;
    }
};
int main(){
student s;
pg p;
ug u;
student *ptr;
ptr=&s;
cout<<"Enter Detail for Student"<<endl;
ptr->getdata();
ptr->discount();
ptr->dispresult();
ptr=&p;
cout<<"Enter Detail for PG"<<endl;
ptr->getdata();
ptr->discount();
ptr->dispresult();
ptr=&u;
cout<<"Enter Detail for UG"<<endl;
ptr->getdata();
ptr->discount();
ptr->dispresult();
return 0;
}
