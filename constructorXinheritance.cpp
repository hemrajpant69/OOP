#include<iostream>
#include<string.h>
using namespace std;
class college{
	protected:
		char location[30];
		char name[30];
		public:
			college(char *a,char *b)
			{
				strcpy(name,a);
				strcpy(location,b);
			}
			void putcollege()
			{
				cout<<"College Name ="<<name<<endl<<"College Location="<<location<<endl;
			}
			
};
class student:virtual public college{
	protected:
		char sname[30];
		int roll;
		public:
			student(char *c,char *d,char *e,int f):college(c,d){
				strcpy(sname,e);
			roll=f;
			}
			void putstudent(){
				cout<<"Name of Student="<<sname<<"Roll="<<roll<<endl;
			}
};
class teacher:virtual public college{
	protected:
		char tname[30];
		int tcode;
		public:
			teacher(char *g,char *h,char *i,int j ):college(g,h){
				strcpy(tname,i);
				tcode=j;
			}
			void putteacher(){
				cout<<"Teacher name="<<tname<<"Teacher code="<<tcode<<endl;
			}
};
class books:public teacher,public student{
	private:
		char bname[30];
		char wname[30];
		int bcode;
		public:
			books(char *k,char *l,char *m,int n,char *o,int p,char *q,char *r,int s):college(k,l),student(k, l, m, n),teacher(k, l, o, p)
			{
				strcpy(bname,q);
				strcpy(wname,r);
				bcode=s;
			}
			void putbook(){
				cout<<"Book name="<<bname<<endl<<"Writer name="<<wname<<endl<<"Book code="<<bcode;
			}
};
int main()
{
books b("NCIT","Balkumari","Hemraj",06,"Rudra",81,"oop","Hari",1234);
b.putcollege();
b.putstudent();
b.putteacher();
b.putbook();
return 0;
}
