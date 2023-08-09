#include <iostream>
using namespace std;

class default_constructor
{
    private:
    int x,y;
    public:
    void input()
    {
        cout<<"Enter two number:"<<endl;
        cin>>x>>y;
    }
    void display()
    {
        cout<<"x: "<<x<<"\ny: "<<y<<endl;
    }
};

class defined_constructor
{
    private:
    int a,b;
    public:
    defined_constructor()
    {
        cout<<"Enter two number:"<<endl;
        cin>>a>>b;
    }
    void display()
    {
        cout<<"x: "<<a<<"\ny: "<<b<<endl;
    }
};

int main()
{
    default_constructor dc;
    dc.input();
    dc.display();
    defined_constructor d;
    d.display();
    return 0;
}