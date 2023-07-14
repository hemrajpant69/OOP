#include<iostream>
#include<string.h>
using namespace std;
class person{
	protected:
		int code;
		char name[30];
		public:
			person(char *a,int b){
				strcpy(name,a);
				code=b;
			}
			void putperson(){
				cout<<"Name of person="<<name<<"Code of person="<<code<<endl;
				
			}
};
class account:virtual public person{
	protected:
		int pay;
		public:
			account(char *c,int d,int e):person(c,d){
				pay=e;
			}
			void putaccount()
			{
				cout<<"Pay="<<pay<<endl;
			}
};
class admin:virtual public person{
	protected:
		int experience;
		public:
			admin(char *f,int g,int h):person(f,g){
				experience=h;
			}
			void putadmin()
			{
				cout<<"Experience ="<<experience<<endl;
			}
};
class master:public account,public admin{
private:
int mpay;
int mexperience;
int mcode;
char mname[30];
public:
master(char *i,int j,int k,int l,int m,int n,int o,char *p):person(i,j),account(i,j,k),admin(i,j,l){
mpay=m;
mexperience=n;
mcode=o;
strcpy(mname,p);	
}
void putmaster(){
	cout<<"Master Name="<<mname<<"Master experience ="<<mexperience<<"Master code="<<mcode<<"Master pay="<<mpay;
}	
	
};
int main()
{
	int q,r,s,t,u,v;
	char pname[30];
	char mastername[30];
	cout<<"Enter person name , code ...account pay ....admin experience...... master's name ,code,experience and pay"<<endl;
	cin>>pname>>q>>r>>s>>mastername>>t>>u>>v;
	master m(pname,q,r,s,t,u,v,mastername);
	m.putperson();
	m.putaccount();
	m.putadmin();
	m.putmaster();
	return 0;
}
