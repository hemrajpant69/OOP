// Adding Two Complex Using Constructor 
#include<iostream>
using namespace std;

class complex {
private:
    int real;
    int img;
public:
    void addcomplex(complex c1, complex c2);
    complex(int a, int b);
    void display();
};

complex::complex(int a, int b) {
    real = a;
    img = b;
}

void complex::addcomplex(complex c1, complex c2) {
    real = c1.real + c2.real;
    img = c1.img + c2.img;
}

void complex::display() {
    cout << real << "+" << img << "i" << endl;
}

int main() {
	int c,d,e,f;
	cout<<"Enter First Complex Real and Img"<<endl;
	cin>>c>>d;
	cout<<"Enter Secomd Complex Real and Img"<<endl;
	cin>>e>>f;
    complex c1(c, d);
    complex c2(e, f);
    complex c3(0, 0);

    c3.addcomplex(c1, c2);
    c3.display();

    return 0;
}

