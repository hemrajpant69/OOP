#include<iostream>
using namespace std;
class type{
float feet;
float  inches;
float meter;
public:
   type(){

   }
   type(float i){
   inches=i;

   }
   void display(){
   cout<<"distance in inches="<<inches<<endl;
   }
   operator float (){
   feet=inches/12;
   meter=feet/3.28;
   return meter;
   }
};
int main(){
type t(3288.0);
t.display();
float total;
total=t;
cout<<"Distance in Meter="<<total;
return 0;
}
