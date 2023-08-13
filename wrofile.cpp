//Write to file and read from file(object)
#include<iostream>
#include<fstream>
using namespace std;
class student{
	private:
		char name[30];
		char add[30];
		int roll;
		public:
			void input(){
				cout<<"Enter student name, address and roll number"<<endl;
				cin>>name>>add>>roll;
			}
			void display()
			{
			cout<<"Name="<<name<<endl<<"Address="<<add<<endl<<"Roll number ="<<roll<<endl;
			}
};
int main(){
	student s;
	fstream file;
	file.open("student_detail.txt",ios::out);
	if(!file){
		cout<<"File opening error"<<endl;
		exit(0);
	}
	s.input();
	file.write((char*)&s,sizeof(s));
	cout<<"file opened and data written successfully"<<endl;
	file.close();
	file.open("student_detail.txt",ios::in);
	if(!file){
		cout<<"File opening error"<<endl;
		exit(0);
	}
	file.read((char*)&s, sizeof(s));
	s.display();
	file.close();
	return 0;
}
