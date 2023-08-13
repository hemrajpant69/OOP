//Write to file and Read from File
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int i,n,num,sum=0;
	float avg=0;
	cout<<"Enter total numbeber of integer to read"<<endl;
	cin>>n;
	fstream file;
	file.open("integer.txt",ios::out); //opening file
	if(!file){
		cout<<"File opening failed"<<endl;
		exit(0);
	}
	//write to a file
	for(i=0;i<n;i++){
		cout<<"Enter"<<i+1<<"Number"<<endl;
		cin>>num;
		file<<num<<" ";
	}
	file.close();
	file.open("integer.txt",ios::in);//opening file for reading
	if(!file){
		cout<<"File opening failed"<<endl;
	exit(0);
	}
	while(file>>num){
		sum=sum+num;
	}
	file.close();
	//open file for apend purpose
	file.open("integer.txt",ios::app);
	if(!file){
		cout<<"File opening failed"<<endl;
		exit(0);
	}
	avg=(float)sum/n;
	file<<"\n sum="<<sum<<endl;
	file<<"\n average="<<avg<<endl;
	file.close();
	return 0;
	
}
