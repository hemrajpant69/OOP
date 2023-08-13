// Writing To File
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream filename;
	filename.open("file.txt",ios::out);
	if(!filename){
		cout<<"Error Occured While creating file"<<endl;
	}
	else{
		cout<<"File Created successfully and data are written to file"<<endl;
		filename<<"Im Learning c++ file"<<endl;
		filename.close();
	}
	return 0;
}
