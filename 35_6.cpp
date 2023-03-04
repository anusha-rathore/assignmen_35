#include<iostream>
using namespace std;

template < class t>
t sum(t a[],int length)
{
    t sum=0;
    for(int i=0; i<length; i++)
    {
        sum=sum+a[i];
    }
    return sum;
    
}
int main(){
int x[5];
int i;
cout<<"enter number";
for(i=0; i<5 ; i++)
{
    cin>>x[i];
}
cout<<"sum"<<sum<int>(x[],5);

}