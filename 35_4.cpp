#include<iostream>
using namespace std;

template<typename T>
void swap(T *x,T *y)
{
    T *temp;
    *temp=*x;
    *x=*y;
    *y=*temp;
    
    
}
int main()
{
   
    int x=2,y=5;
    cout<<"before swaping"<<endl;
    cout<<"a="<<x<<endl;
    cout<<"b="<<y<<endl;
    swap<int>(x,y);
    cout<<"after swaping"<<endl;
  cout<<"a="<<x<<endl;
    cout<<"b="<<y<<endl;
    return 0;
}
