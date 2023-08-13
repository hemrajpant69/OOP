//Creating file
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream filename;
	filename.open("file",ios::out);
	if(!filename){
		cout<<"Error while Opening File"<<endl;
	}
	else{
		cout<<"File Created succeesfully"<<endl;
		filename.close();
	}
	return 0;
}
