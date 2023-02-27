#include<iostream>
uisng namespace std;
#include <queue>

int main()
{
    priority_queue<int> pq;
    pq.push(16);
    pq.push(1);
    pq.push(166);
    pq.push(10);
    pq.push(13);
    pq.push(189);
    pq.push(18);
    pq.push(99);

    cout<<"size : "<<pq.size() << endl;
    cout<<" top :"<<pq.top() << endl;

    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }

}