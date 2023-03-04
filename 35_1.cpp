#include<iostream>
using namespace std;

template < class t>
t add(t a,t b)
{
    return(a+b);

}
int main(){
cout<<"int"<<add<int>(4,5)<<endl;
cout<<"float"<<add<float>(1.2,8.5);
}