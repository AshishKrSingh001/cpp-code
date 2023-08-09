#include <iostream>
using namespace std;

class test
{
    public:
    void sum(int x,int y)
    {
        cout<<"Addition : "<<x+y<<endl;
    }
    void sum(int x,int y,int z)
    {
        cout<<"Addition : "<<x+y+z<<endl;
    }
    void sum(int x,int y,int z,int a)
    {
        cout<<"Addition : "<<x+y+z+a<<endl;
    }
};
int main()
{ 
    test t;
    t.sum(20,40);
    t.sum(20,30,40);
    t.sum(20,10,10,10);
    return 0;
}