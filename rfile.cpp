//Reading from file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream filename;
	filename.open("file.txt",ios::in);
	if(!filename){
		cout<<"Error Occured While creating file"<<endl;
	}
	else{
		char x;
		while(1){
			filename>>x;
			if(filename.eof())
			{
				break;
			}
			cout<<x;
		}
	}
	filename.close();
	return 0;
}
