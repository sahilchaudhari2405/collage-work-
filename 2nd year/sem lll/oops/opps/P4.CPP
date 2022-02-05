#include<iostream>
using namespace std;
class Area{
  public:
  void area(int radius){
    float area= 3.14*radius*radius;
    cout<<"The given radius is: "<<radius<<endl;
    cout<<"The area of circle is: "<<area<<endl;
  }
  void area(int length, int breadth){
    float area= length*breadth;
    cout<<"The given length and breadth is: "<<length<<" & "<<breadth<<endl;
    cout<<"The area of rectangle is: "<<area<<endl;
  }
  void area(int height, float base){
    float area= 0.5*height*base;
    cout<<"The given height and base is: "<<height<<" & "<<base<<endl;
    cout<<"The area of triangle is: "<<area<<endl;
  }
};


int main(){
  Area a;
 a.area(5);
 a.area(5,10);
 a.area(5,2.5f);
 return 0;
}