#include<iostream>
using namespace std;
template <class t>
t find_large(t a, t b)
{
    if(a>=b)
       return a;
    else 
        return b;
}
int main()
{
    cout<<"largest integer number "<<find_large<int>(4,9)<<endl;
    cout<<"largest float number "<<find_large<float>(4.5,9.5)<<endl;

}