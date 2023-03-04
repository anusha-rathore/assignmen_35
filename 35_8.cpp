
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template < class t>
class Stack {
    private:
    int top;
    t st[100];
    public:
    Stack()
    {
        top = -1;
    }
    void push (t i)
     {
         st[++top]=i;
     }
    
    t pop(){
        return st[top--];
    }
};
int main()
{
    Stack<int> int_stack;
    Stack<string> str_stack;
    int_stack. push(12);
    int_stack.push(21);
    
    str_stack.push("A");
  str_stack.push("B");
  
  cout << int_stack.pop() << endl;
  
  cout<<str_stack.pop();
}