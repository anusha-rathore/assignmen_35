
#include<iostream>
using namespace std;


class Shape{
    public:
    string shape;
    public:
    Shape(){}
    Shape(string s){
     shape=s;
     }
      void setdata(string s){
       shape=s;
       }
   string getdata(){
   return shape;
   }
    };
    template < typename t>
    class Circle : public Shape
    {
     t radius;
     
    
    public :
    Circle (t r ,string s): Shape(s)
    {
    radius=r;}
    
    Circle (t r ): Shape()
    {
    radius=r;}
    Circle(){}
    t area(){
    return 3.14* radius*radius;
    
    }
    
    };
    int main()
    {
    Circle <float> c1(10.0,"circle");
   
    cout<<"area of circle  "<<c1.area()<<endl;
    
    cout<<"shape is "<<c1.getdata();
}