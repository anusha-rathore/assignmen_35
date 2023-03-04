#include<iostream>
using namespace std;
template <class t>
t find_large(t a, t b ,t c)
{
    if(a>=b)
      if(a>=c)
        return a;
      else 
        return c;
    else
    if(b>=c)
      return b;
    else
      return c;  
}
int main()
{
    cout<<"largest integer number "<<find_large<int>(4,9,8)<<endl;
    cout<<"largest float number "<<find_large<float>(4.5,9.5,10.5)<<endl;

}