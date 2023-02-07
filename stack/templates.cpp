#include<iostream>
using namespace std;

template <typename T, typename V>

class Pair 
{
    T x;
    V Y;

    public:

    void setx(T x)
    {
        this -> x=x;
    }

    void sety(V y)
    {
        this -> y=y;
    }

    int getx()
    {
        return x;
    }

    int gety()
    {
        return y;
    }
};

int main()
{
    Pair <int,double> p1;
    p1.setx(20);
    p1.sety(20.00);

    p1.getx();
    p1.gety();

   // converting pair class to timplets without changing the class
   Pair<Pair<int,int>,int> P2;
   P2.sety(10);

   Pair <int,int> P4;
   P4.getx(40);
   P4.sety(50);

   P2.getx(P4);
   cout<<P2.getx().getx()<<endl<<P2.getx().gety()<<endl<<P2.gety();  
}