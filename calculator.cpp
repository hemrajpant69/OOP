#include<iostream>
#include<conio.h>
using namespace std;
class calculator{
	private:
		int a,b,choice;
		float result=0;
		public:
			void getdata(){
				cout<<"===========Enter Value of Operand:"<<endl;
				cin>>a;
			}
			void display(){
				cout<<"===========Operation Complete==="<<endl;
			}
	friend calculator operator *(calculator c1,calculator c2){
		calculator temp;
		
		temp.result=c1.a*c2.a;
		cout<<"Result="<<temp.result<<endl;
		return temp;
	}
	friend calculator operator /(calculator c1,calculator c2){
			calculator temp;
		
			temp.result=c1.a/c2.a;
			cout<<"Result="<<temp.result<<endl;
			return temp;
		}
	friend calculator operator -(calculator c1,calculator c2){
			calculator temp;
		
			temp.result=c1.a-c2.a;
			cout<<"Result="<<temp.result<<endl;
			return temp;
		}
	friend calculator operator +(calculator c1,calculator c2){
			calculator temp;
		
	  	temp.result=c1.a+c2.a;
	  	cout<<"Result="<<temp.result<<endl;
	  	return temp;
	  }
};

int main()
{
	int choice;
	calculator c1,c2,c3;
	c1.getdata();
	c2.getdata();
p:	
			
system("cls");

cout<<"\n\n\t\t\t========================================";
cout<<"\n\n\t\t\t===========";
cout<<"\n\n\t\t\t========================================";
cout<<"\n\n 1. Multiplication ";
cout<<"\n\n 2.Division";
cout<<"\n\n 3.Subtraction";
cout<<"\n\n 4.Addition";
cout<<"\n\n Enter Your choice : ";
cin>>choice;
switch(choice)
{
	case 1:
	c3=c1*c2;
	c3.display();
		break;
	case 2:
	c3=c1/c2;
	c3.display();
		
		
		break;
	case 3:
		c3=c1-c2;
	c3.display();
	    
		break;
	case 4:
		c3=c1+c2;
	c3.display();
	  
     	break;
	    exit(0);
	default:
	    cout<<"\n\n Invalid Choice..Please Try Again.....";
	}
	getch();
	goto p;
	return 0;	
}
