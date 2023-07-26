#include<iostream>
#include<cstring>

using namespace std;

class person{
protected:
	int sage, eage;
	char sname[30];
	char ename[30];

public:
	virtual void getdata(){
		cout<<"Enter age and name of a student:"<<endl;
		cin>>sage>>sname;
		cout<<"Enter age and name of an employee"<<endl;
		cin>>eage>>ename;
	}
	
	virtual void Assign(int, char*, int, char*) {}
	virtual void Change(int, char*, int, char*) {}
	virtual void Del() {}
};

class assign:public person{
public:
	void Assign(int eage, char* ename, int sage, char* sname) override{
		this->eage=eage;
		strcpy(this->ename, ename);
		this->sage=sage;
		strcpy(this->sname, sname);
		cout<<"Student name="<<sname<<"\tStudent age="<<sage<<endl<<"Employee name="<<ename<<"\t Employe age="<<eage<<endl;
	}
};

class Delete:public person{
public:
	void Del() override{
		sage = 0;
		eage = 0;
		strcpy(sname, "");
		strcpy(ename, "");
		cout<<"All data Deleted"<<endl;
	}
};

class change:public person{
public:
	void Change(int eage, char* ename, int sage, char* sname) override{
		this->eage=eage;
		strcpy(this->ename, ename);
		this->sage=sage;
		strcpy(this->sname, sname);
		cout<<"Student name="<<sname<<"\t Student age="<<sage<<endl<<"Employee name="<<ename<<"\t Employe age="<<eage<<endl;

	}
};

int main(){
	int count;
	char Sname[30];
	char Ename[30];
	int Eage;
	int Sage;
	char snam[30];
	char enam[30];
	person *pptr;
	change c;
	Delete d;
	assign a;
	pptr=&a;
	cout<<"Enter 1 for assign new value 2 for delete all the value and 3 for quit"<<endl;
	cin>>count;
	cout<<"Enter name and age of employee and student respectively"<<endl;
	cin>>Ename>>Eage>>Sname>>Sage;
	pptr->Assign(Eage,Ename,Sage,Sname);
	pptr=&c;
		if(count==1)
		{
		

	cout<<"Enter new name and age of employee and student respectively"<<endl;
	cin>>enam>>Eage>>snam>>Sage;
	pptr->Change(Eage,enam,Sage,snam);
     }
     else if(count==2)
     {
	 
	pptr=&d;
	pptr->Del();
}
else {

cout<<"Thanks for cooperate...Now Program Terminatted!!!"<<endl;as
}


	return 0;

}

