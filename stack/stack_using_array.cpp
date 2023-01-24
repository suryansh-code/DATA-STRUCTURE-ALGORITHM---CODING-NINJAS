#include<iostream>
#include<climits>
using namespace std;

class stackusingarray(int size)
{
    data=new int[size];
    int next=0;
    int capacity=size;
}

// function to return the size of the linked list
int total_size()
{
    return next;
}

// function to check the stack is empty or not
bool is_empty()
{
    if(next==0)
    {
        return true;
    }
    else
    {
        return false
    }
}

//function to check if the stack is full or not
bool is_full()
{
    if(next==capacity)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//function to push the element in array
void push(int element)
{
    if(is_full())
    {
        cout<<"the stack is full";
    }
    else
    {
        data[next]=element;
        next++;
    }
}

// function to pop/delete the element in the stack
int pop()
{
    if(is_empty())
    {
        return MIN_INT;
    }
    else
    {
        return data[next -1];
        next--;
    }
}

// functioj to print the top most element
int top()
{
    if(is_empty())
    {
        return MIN_INT;
    }
    else
    {
        return data[next -1];
    }
}

int main()
{
    stackusingarray s(5);
    s.push(10);
    s.push(30);
    s.push(50);
    s.push(70);
    s.push(80); // stack is full;
    
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;

    s.pop();
    s.pop();
    s.pop();
    s.pop();

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
}