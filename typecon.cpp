//conversion from polar to rectangle (using conversion routine in polar)
#include<iostream>
#include<math.h>
using namespace std;
class rectangle{
float xco;
float yco;
public:
    rectangle(){

    xco=0.0;
    yco=0.0;
    }
    rectangle(float x, float y){
    xco=x;
    yco=y;
    }
    void display(){
    cout<<"("<<xco<<","<<yco<<")"<<endl;
    }
};

class polar{
private:
    float radius;
    float angle;
public:
    polar(){
    radius=0.0;
    angle=0.0;
    }
    polar(float r,float a){


    radius=r;
    angle=a;
    }
    void display(){

    cout<<"("<<radius<<","<<angle<<")"<<endl;
    }
    operator rectangle(){
    float x=radius*cos(angle);
    float y=radius*sin(angle);
    return rectangle(x,y);
    }

};

int main(){
    polar p(33.0,0.445);
    rectangle r;
    r=p;
    cout<<"Polar Coordinates=";
    p.display();
    cout<<"Rectangle coordinates=";
    r.display();
return 0;
}


