#include<iostream>
using namespace std;
#define max 10
template<class T>
class stack{
	private:
		T stk[max];
		int top;
		public:
			stack(){
				top=-1;
			}
			void push(T data){
				if(top==(max-1)){
					cout<<"Stack is full"<<endl;
				}else{
					top++;
					stk[top]=data;
				}
			}
			void pop(){
				if(top==-1)
				{
					cout<<"Stack is empty!!"<<endl;
				}else{
					top--;
				}
			}
			void show(){
				for(int i=top;i>=0;i--){
					cout<<"Stack["<<i<<"]"<<stk[i]<<endl;
				}
			}
};
int main(){
	stack <char> s;
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	s.push('e');
	s.push('f');
	s.push('g');
	s.push('h');
	s.push('i');
	s.push('j');
	s.show();
	cout<<"poped top"<<endl;
	s.pop();
	s.show();
	return 0;
}
