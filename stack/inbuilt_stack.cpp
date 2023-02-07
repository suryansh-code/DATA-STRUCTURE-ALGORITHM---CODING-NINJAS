#include<iostream>
using namespace std;

// we will import the stack 
#include <stack>

int main()
{
    stack<int> s;
    s.push(10);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);
    s.push(90);

    cout<< s.top() << endl;
    s.pop();
    cout<< s.top() <<endl;
    s.pop();
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;

}